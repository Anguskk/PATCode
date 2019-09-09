//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace  std;
//int ____weight;
//struct weightedNode
//{
//	int id,weight;
//	vector<int> child;
//};
//vector<weightedNode> vNodes_;
//vector< vector<int>> ans;
//void dfs_(int s,int w,vector<int> path)
//{
//	if (vNodes_[s].child.empty())
//	{
//		if (w == ____weight)
//		{
//			//path.push_back(vNodes_[s].weight);
//			ans.push_back(path);
//			
//		}
//		return;
//		
//	}
//	if (w > ____weight)
//	{
//		return;
//	}
//	for (int i = 0; i < vNodes_[s].child.size(); ++i)
//	{
//		int to = vNodes_[s].child[i];
//		path.push_back(vNodes_[to].weight);
//		dfs_(to,w+vNodes_[to].weight,path);
//		path.pop_back();
//	}
//}
//int PathofEqualWeight(int argc, char* argv[])
//{
//	int N,Non_leaf;
//	cin>>N>>Non_leaf>>____weight;
//	vNodes_.resize(N);
//	for (int i = 0; i < N; ++i)
//	{
//		scanf("%d",&vNodes_[i].weight);
//		vNodes_[i].id = i;
//	}
//	for (int i = 0; i < Non_leaf; ++i)
//	{
//		int id,k,chlid;
//		scanf("%d %d",&id,&k);
//		vNodes_[id].child.resize(k);
//		for (int j = 0; j < k; ++j)
//		{
//			scanf("%d",&vNodes_[id].child[j]);
//		}
//
//	}
//	vector<int> path;
//	path.push_back(vNodes_[0].weight);
//	dfs_(0,vNodes_[0].weight,path);
//
//	sort(ans.begin(),ans.end(),greater<vector<int>>());
//	for (int i = 0; i < ans.size(); ++i)
//	{
//		for (int j = 0; j < ans[i].size(); ++j)
//		{
//			if (j == 0)
//			{
//				printf("%d",ans[i][j]);
//			}
//			else
//			{
//				printf(" %d",ans[i][j]);
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//	
//}
