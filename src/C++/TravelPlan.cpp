#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace  std;
//struct edge
//{
//	int dis;
//	int cost;
//	edge(int d,int c)
//	{
//		dis=d;
//		cost=c;
//	}
//};
//vector<vector<pair<int,edge>> >  adj; 
//bool G[501][501];
//int disTo[501];
//int pathTo[501];
//int costTo[501];
//bool onQ[501];
//queue<int> q;
//void relax(int v)
//{
//	for (int i = 0; i < adj[v].size(); ++i)
//	{
//		int p=adj[v][i].first;
//		edge e=adj[v][i].second;
//		if (disTo[p] > disTo[v]+e.dis)
//		{
//			pathTo[p] = v;
//			disTo[p] = disTo[v]+e.dis;
//			costTo[p] = costTo[v] + e.cost;
//			if (onQ[p] == false)
//			{
//				q.push(p);
//				onQ[p]= true;
//			}
//		}
//		else if (disTo[p] == disTo[v]+e.dis)
//		{
//			if (costTo[p] > costTo[v]+e.cost)
//			{
//				costTo[p] = costTo[v] + e.cost;
//				pathTo[p]=v;
//				
//			}
//		}	
//	}
//}
//int TravelPlan(int argc, char* argv[])
//{
//	int V,E,s,des;
//	cin>>V>>E>>s>>des;
//	adj.resize(V+1);
//	int c1,c2,d,cost;
//	for (int i = 0; i < E; ++i)
//	{
//		scanf("%d %d %d %d",&c1,&c2,&d,&cost);
//		G[c1][c2]=true;
//		G[c2][c1]=true;
//		adj[c1].push_back(make_pair(c2,edge(d,cost)));
//		adj[c2].push_back(make_pair(c1,edge(d,cost)));
//	}
//	fill(disTo,disTo+501,2147483647);
//	disTo[s] = 0;
//	q.push(s);
//	while (!q.empty())
//	{
//		int temp=q.front();
//		q.pop();
//		onQ[temp]=false;
//		relax(temp);
//	}
//	int costs=0;
//	stack<int> stack;
//	
//	for (int i = des; i != s; i = pathTo[i])
//	{
//		stack.push(i);
//	}
//	cout<<s;
//	while (!stack.empty())
//	{
//		cout<<" "<<stack.top();
//		stack.pop();
//	}
//	cout<<" "<<disTo[des]<<" "<<costTo[des]<<endl;
//	return 0;
//}
