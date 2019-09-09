//#include <iostream>
//#include <vector>
//using namespace std;
//vector< vector<int> > adj;
//bool isVisit[1001];
//void  dfs_(int s)
//{
//	isVisit[s] = true;
//	for (int i = 0; i < adj[s].size(); ++i)
//	{
//		if (isVisit[adj[s][i]] == false)
//		{			
//			dfs_(adj[s][i]);
//		}
//	}
//}
//int main(int argc, char* argv[])
//{
//	int V,E;
//	cin>>V>>E;
//	adj.resize(V+1);
//	for (int i = 1; i <= E; ++i)
//	{
//		int t1,t2;
//		scanf("%d %d",&t1,&t2);
//		adj[t1].push_back(t2);
//		adj[t2].push_back(t1);
//
//	}
//	int component=0;
//	for (int i = 1; i <= V; ++i)
//	{
//		if (isVisit[i] == false)
//		{
//			dfs_(i);
//			component +=1;
//		}
//	}
//	
//	int cntOdd=0;
//	for (int i = 1; i <=V ; ++i)
//	{
//		if (adj[i].size() % 2 ==1)
//		{
//			cntOdd +=1;			
//		}
//		if (i!=1)
//		{
//			printf(" ");
//		}
//		printf("%d",adj[i].size());
//		
//	}
//	cout<<endl;
//	if (component != 1 || cntOdd >2)
//	{
//		printf("Non-Eulerian");
//	}
//	else
//	{
//		if (cntOdd == 2)
//		{
//			printf("Semi-Eulerian");
//		}
//		else if (cntOdd ==0)
//		{
//			printf("Eulerian");
//		}
//		
//	}
//	return 0;
//}
