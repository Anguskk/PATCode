#pragma GCC optimize(3)
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <time.h>
#define LL long long
using namespace std;

const int kNotFound = -1;
//取余的方法，
/**
 * \brief 
 * 直到直到余数为0的时候，退出  BFS
 * \param n 
 * \param d 
 * \return 
 */
string Solve(int n, int d) {
    vector<int> father(n, kNotFound);
    vector<int> letter(n, kNotFound);

    father[d % n] = 0;
    letter[d % n] = d;

    queue<int> current_bfs_level;
    current_bfs_level.push(d % n);

    while (father[0] == kNotFound) {
        int itr = current_bfs_level.front();
        current_bfs_level.pop();
        for (int digit=0;digit<=d;digit += d) {
            int next = (itr * 10 + digit) % n;
            if (father[next] == kNotFound) {
                letter[next] = digit;
                father[next] = itr;
                current_bfs_level.push(next);
            }
        }
    }

    string number = "";
    int l = 0;
    
    do {
        number += '0' + letter[l];
        l = father[l];
    } while (l != 0);

    reverse(number.begin(), number.end());
    return number;
}

/**
 * \brief 
 * \param N 解决不了大数
 * \param K 
 * \return 
 */
LL mysolve(int N,int K){
    LL ans=-1;
    queue<LL> q;
    q.push(K);
    bool flag=false;
    while(!flag){
        LL next=q.front()*10;
        q.pop();
        for(LL digit=0;digit<=K;digit +=K){
            LL temp = next+digit;
            if(temp % N ==0) {
                flag=true;
                ans = temp;
                break;
            }
            q.push(temp);
        }        
    }
    return ans;
}
int K_multiples() {
    int start=time(NULL);
    int n, d;
    cin >> n >> d;

    cout << mysolve(n, d) << '\n';
    return 0;
}
