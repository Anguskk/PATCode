#include <iostream>
#include <vector>
#include <set>
using namespace  std;
#include <string>
int RaffleforWeibofollower(int argc, char* argv[])
{
	int M,N,S;
	cin>>M>>N>>S;
	if (S>M)
	{
		cout<<"Keep going..."<<endl;
		return 0;
	}
	string s;
	set<string> winners;
	vector<string> raffles;
	vector<string>  ans;
	raffles.resize(M+1);
	for (int i = 1; i <= M; ++i)
	{
		cin>>s;
		raffles[i]=s;
	}
	int cnt=0;
	for (int j = S; j <= M; )
	{
		if (winners.find(raffles[j])==winners.end() && cnt%N==0)
		{
			winners.insert(raffles[j]);
			ans.push_back(raffles[j]);
			j = j+N;
		}
		else
		{
			if (winners.find(raffles[j])!=winners.end())
			{
				++j;
			}
			else
			{
				++cnt;
				++j;
			}			
		}
	}
	if (ans.size()==0)
	{
		cout<<"Keep going..."<<endl;
		return 0;
	}
	else
	{
		for (int i = 0; i < ans.size(); ++i)
		{
			printf("%s\n",ans[i].c_str());
		}
	}
	
	return 0;
}
