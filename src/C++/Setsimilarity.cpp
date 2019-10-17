#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
vector<unordered_set<int>> vMysets(52);
vector<unordered_map<int,bool> > vLookups(52);
int SetSimilarity(int argc, char* argv[])
{
	int n;cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		int k;cin>>k;
		
		for (int j = 0; j < k; ++j)
		{
			int t;
			scanf("%d",&t);
			vMysets[i].insert(t);
			vLookups[i][t]=true;
		}
	}
	int query;cin>>query;
	for (int i = 0; i <query; ++i)
	{
		int k1,k2;cin>>k1>>k2;
		int cnt=0;
		if (vMysets[k1].size()>vMysets[k2].size())
		{
			 unordered_set<int>& minset=vMysets[k2];
			for (auto it=minset.cbegin(); it!=minset.cend(); ++it)
			{			
				if (vLookups[k1][*it])
				{
					cnt +=1;
				}
			}
		}
		else
		{
			 unordered_set<int>& minset = vMysets[k1];
			 for (auto it=minset.cbegin(); it!=minset.cend(); ++it)
			{
				if (vLookups[k2][*it])
				{
					cnt +=1;
				}
			}

		}
		//cout<<vLookups[1][1001]<<endl;
		printf("%2.1f%%\n",100.0*cnt/(vMysets[k1].size()+vMysets[k2].size()-cnt));
	}
	return 0;
}
