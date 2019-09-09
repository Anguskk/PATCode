#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
using namespace  std;

//unordered_map<int,bool> lookup;
int DamnSingle(int argc, char* argv[])
{
	bool isExist[100001];
int  notSingle[100001];
	int n;cin>>n;
	for (int i = 0; i < 100001; ++i)
	{
		notSingle[i]=-1;
	}
	for (int i = 0; i < n; ++i)
	{
		int p1,p2;
		scanf("%d %d",&p1,&p2);
		isExist[p1]= true;
		isExist[p2]= true;
		notSingle[p1]=p2;
		notSingle[p2]=p1;
		//lookup[make_pair(p1,p2)]=true;
		//lookup[make_pair(p2,p1)]=true;
		// lookup[p1+p2] = true;
		// lookup[p2+p1] = true;
		//

	}
	
	int query;cin>>query;
	set<int> decouple;
	set<int>  ans;
	for (int i = 0; i < query; ++i)
	{
		int temp;scanf("%d",&temp);
		if (isExist[temp])
		{
			decouple.insert(temp);
		}
		else
		{
			ans.insert(temp);
		}
	}
	auto  it=decouple.begin();
	for (;it!= decouple.end(); ++it)
	{
		auto it2=decouple.find(notSingle[*it]);
		if (it2 == decouple.end())
		{
			
		}
		else
		{
			decouple.erase(*it2);
			it =decouple.erase(it);
			
			//decouple.erase()
		}
	}
	ans.insert(decouple.begin(), decouple.end());
	cout<<ans.size()<<endl;
	for (auto it=ans.begin(); it != ans.end(); ++it)
	{
		if (it==ans.begin())
		{
			printf("%05d",*it);
		}
		else
		{
			printf(" %05d",*it);
		}
		
	}
	return 0;
}
