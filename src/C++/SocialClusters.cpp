//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//using namespace  std;
//
//vector< vector<int> > adj;
//bool isVisit[1010];
//void  dfs_(int s,int &cnt)
//{
//	isVisit[s] = true;
//	cnt +=1;
//	for (int i = 0; i < adj[s].size(); ++i)
//	{
//		if (isVisit[adj[s][i]] == false)
//		{			
//			
//			dfs_(adj[s][i],cnt);
//		}
//	}
//}
//map<int,vector<int> > hobbyNetwork;
//int SocialCluster(int argc, char* argv[])
//{
//	int n;cin>>n;
//	adj.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		int k;
//		scanf("%d: ",&k);
//		for (int j = 0; j < k; ++j)
//		{
//			int hobby;
//			scanf("%d",&hobby);
//			hobbyNetwork[hobby].push_back(i);
//		}
//
//	}
//	for (auto it=hobbyNetwork.begin();it!=hobbyNetwork.end(); ++it)
//	{
//		auto v=it->second;
//		if (v.size() >=2)
//		{
//			for (int i = 1; i < v.size(); ++i)
//			{
//				for (int j = 0; j < i; ++j)
//				{
//					adj[v[i]].push_back(v[j]);
//					adj[v[j]].push_back(v[i]);
//				}
//			}
//		}
//	}
//	int component=0;
//	set<int,greater<int> > social;
//	for (int i = 0; i < n; ++i)
//	{
//		int cnt=0;
//		if (!isVisit[i])
//		{
//			dfs_(i,cnt);
//			social.insert(cnt);
//			component +=1;
//		}
//	}
//	printf("%d\n",component);
//	auto it=social.begin();
//	printf("%d",*it);
//	for (++it; it!=social.end(); ++it)
//	{
//		// if (it !=social.begin())
//		// {
//		// 	printf(" ");
//		// }
//		printf(" %d",*it);
//	}
//	return 0;
//}
