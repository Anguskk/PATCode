#include <iostream>
#include <set>
#include <vector>
using namespace  std;
bool isPrime(int n)
{
	bool ans=true;
	for (int i = 2; i*i <= n; ++i)
	{
		if (n%i==0)
		{
			ans=false;
			break;
		}
	}
	return ans;
}
int ComeOnLetsC(int argc, char* argv[]){

	bool isExist[10001];
	int ranks[10001];
	bool isRepeat[10001];
	int N;cin>>N;
	for (int i = 1; i <= N; ++i)
	{
		int id;
		scanf("%d",&id);
		isExist[id] = true;
		ranks[id] = i;
	}
	int query;cin>>query;
	
	for (int i = 0; i < query; ++i)
	{
		int id;
		scanf("%d",&id);
		printf("%04d: ",id);
		if (isExist[id] == false)
		{
			
			cout<<"Are you kidding?"<<endl;
			
		}
		else if (isRepeat[id] ==true)
		{

			cout<<"Checked"<<endl;			
		}
		else
		{
			if (ranks[id]==1)
			{
				cout<<"Mystery Award"<<endl;
			}
			else if (isPrime(ranks[id])==true )
			{
				cout<<"Minion"<<endl;
			}
			else
			{
				cout<<"Chocolate"<<endl;
			}			
		}
		isRepeat[id]=true;
	}

	return 0;
}
