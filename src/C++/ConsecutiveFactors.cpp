#include <iostream>
#include <string>

#include <algorithm>
#include <map>
#include <unordered_map>
using namespace  std;
unordered_map<int,int> primeMap;
vector<int> factors;
void primeFactor(int num)
{
	
	for (int i = 2; i <=num; ++i)
	{
		while (num%i==0)
		{
			primeMap[i] +=1;
			num = num/i;
		}
	}
}
void FindFactors(long long int num)
{
	
	long long int  i;
	for (i = 2; i*i < num; ++i)
	{
		
		if (num%i ==0)
		{
			factors.push_back(i);
			factors.push_back(num/i);
			
		}
	}
	if (i*i == num)
	{
		factors.push_back(i);
	}
	
}
int ConsecutiveFactors(int argc, char* argv[])
{
	long long int num;cin>>num;
	FindFactors(num);
	//ËØÊý
	if (factors.empty())
	{
		cout<<1<<endl;
		cout<<num<<endl;
		return 0;
	}
	sort(factors.begin(),factors.end());
	int cnt=1,maxConceutive=1,pos=0;
	for (int i = 1; i < factors.size(); ++i)
	{
		if (factors[i]-factors[i-1] ==1)
		{
			cnt++;
		}
		else
		{
			if (maxConceutive<cnt)
			{
				maxConceutive =cnt;
				pos = i-1;
				cnt=1;
			}
		}
	}
	if (maxConceutive<cnt)
		{
			maxConceutive =cnt;
			pos = factors.size()-1;
			
		}
	cout<<maxConceutive<<endl;
	cout<<factors[pos-maxConceutive+1];
	for (int i = pos-maxConceutive+2; i <= pos; ++i)
	{
		printf("*%d",factors[i]);
	}
	return 0;
}
//AC½â·¨
//#include <iostream>
//#include <cmath>
//using namespace std;
//long int num, temp;
//int main(){
//    cin >> num;
//    int first = 0, len = 0, maxn = sqrt(num) + 1;
//    for (int i = 2; i <= maxn; i++) {
//        int j; 
//        temp = 1;
//        for (j = i; j <= maxn; j++) {
//            temp *= j;
//            if (num % temp != 0) break;
//        }
//        if (j - i > len) {
//            len = j - i;
//            first = i;
//        }
//    }
//    if (first == 0) {
//        cout << 1 << endl << num;
//    } else {
//        cout << len << endl;
//        for (int i = 0; i < len; i++) {
//            cout << first + i;
//            if (i != len - 1) cout << '*';
//        }
//    }
//    return 0;
//}