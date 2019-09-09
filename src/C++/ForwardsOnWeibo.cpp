//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//using namespace  std;
//struct fans
//{
//	int id;
//	vector<int> followers;
//};
//fans fensi[1005];
//bool isExist[1005];
//void dfs(int s,int depth,int &L,set<int> &f)
//{
//	// if (depth ==L)
//	// {
//	// 	return;
//	// }
//	f.insert(fensi[s].followers.begin(),fensi[s].followers.end());
//	if (depth == L-1)
//	{
//		return;
//	}
//	for (int i = 0; i < fensi[s].followers.size(); ++i)
//	{
//		//f.insert(fensi[s].followers[i]);
//		dfs(fensi[s].followers[i],depth+1,L,f);
//	}
//	
//}
//void bfs_(int s,int L,int &cnt)
//{
//	queue<int> q;
//	q.push(s);
//	isExist[s] = true;
//	for (int i = 0; i < L; ++i)
//	{
//		int size=q.size();
//		for (int i = 0; i < size; ++i)
//		{
//			for (int j = 0; j < fensi[q.front()].followers.size(); ++j)
//			{
//				int child=fensi[q.front()].followers[j];
//				if (!isExist[child])
//				{
//					q.push(child);
//					isExist[child] = true;
//					cnt +=1;
//				}
//			}
//			q.pop();
//		}
//	}
//}
//int ForwardOnWeibo(int argc, char* argv[])
//{
//	int N,L;cin>>N>>L;
//	for (int i = 1; i <= N; ++i)
//	{
//		int n,id;cin>>n;
//		for (int k = 0; k < n; ++k)
//		{
//			scanf("%d",&id);
//			fensi[id].followers.push_back(i);
//		}
//	}
//	int query;cin>>query;
//	
//	for (int i = 0; i < query; ++i)
//	{
//		//set<int> myfollowers;
//		int id,cnt=0;cin>>id;
//		//myfollowers.insert(id);
//		memset(isExist,false,sizeof(isExist)/sizeof(bool));
//		bfs_(id,L,cnt);
//		printf("%d\n",cnt);
//		
//		//isExist[id] = true;
//		//myfollowers.assign(fensi[id].followers.begin(),fensi[id].followers.end());
//		// for (int i = 0; i <L ; ++i)
//		// {
//		// 	
//		// 	for (auto it=myfollowers.begin();it!=myfollowers.end(); ++it)
//		// 	{
//		// 		
//		// 	}
//		// }
//		//dfs(id,0,L,myfollowers);
//		//printf("%d\n",myfollowers.size()-1);
//	}
//	return 0;
//}
