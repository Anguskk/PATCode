#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <memory.h>
using namespace std;
//map<int, int> ans;
//bool G[10001][10001];
//vector<int> temp;
//bool visit[10001];
//int disto[10001];
////全局作用变量传引用
//void dfs(int u,int N,int len,int &maxlen ) {
//    visit[u] = true;   
//   
//    if (maxlen == len)
//    {
//        temp.push_back(u);
//    }
//    for(int v = 1; v <= N; v++) {       
//        if(visit[v] == false &&G[u][v])
//            dfs(v,N,len+1,maxlen);        
//    }    
//    if (maxlen <  len)
//    {
//        maxlen=len;
//        temp.clear();
//        temp.push_back(u);
//    }
//    
//}
//
//int DeepestRoot() {
//    int N, w;
//    cin >> N ;
//    int i1, i2;
//    for(int i = 1; i < N; i++) {
//        cin >> i1 >> i2;     
//       
//        G[i1][i2] = true;
//        G[i2][i1] = true;
//
//    }
//    int component=0;
//    for(int i = 1; i <=N; i++) {           
//        int len = 0, maxlen = 0;
//        if (!visit[i])
//        {
//            dfs(i, N, len, maxlen);
//            component +=1;
//        }
//        
//      
//    }
//    if (component>1)
//    {
//       printf("Error: %d components\n",component);
//        return 0;
//    }
//    else
//    {
//        int s1=temp[0];
//        set<int> nodes;
//        for (int i = 0; i < temp.size(); ++i)
//        {
//            nodes.insert(temp[i]);
//        }
//        temp.clear();
//        int len=0,maxlen=0;
//       
//        memset(visit,false,sizeof(visit)/sizeof(bool));
//       
//        dfs(s1,N,0,maxlen);
//        for (int i = 0; i < temp.size(); ++i)
//        {
//            nodes.insert(temp[i]);
//        }
//        for (auto it=nodes.begin(); it!=nodes.end(); ++it)
//        {
//            cout<<*it<<endl;
//        }
//    }
//    
//    return 0;
//}