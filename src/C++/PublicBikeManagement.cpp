//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <cmath>
//using namespace  std;
//struct edge
//{
//	
//	int dis;
//	edge(int d)
//	{
//		dis=d;
//	}
//};
//vector<vector<pair<int,edge>> >  adj; 
////bool G[501][501];
//int disTo[501];
//int pathTo[501];
//int bikeSum[501];
//int weights[501];
//bool onQ[501];
//queue<int> q;
//int  des,capaticy;
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
//			bikeSum[p] =weights[p]+bikeSum[v];
//			if (onQ[p] == false)
//			{
//				q.push(p);
//				onQ[p]= true;
//			}
//		}
//		else if (disTo[p] == disTo[v]+e.dis)
//		{
//			if (weights[des] == 0)
//			{
//				if (bikeSum[p] < bikeSum[v]+weights[p])
//				{
//					bikeSum[p] = bikeSum[v]+weights[p];
//					pathTo[p]=v;
//					
//				}
//
//			}
//
//			else if (weights[des] == capaticy)
//			{
//				if (bikeSum[p] > bikeSum[v]+weights[p])
//				{
//					bikeSum[p] = bikeSum[v]+weights[p];
//					pathTo[p]=v;
//					
//				}
//			}			
//		}	
//	}
//}
//int PublicBikeManage(int argc, char* argv[])
//{
//	int V,E,s;
//	cin>>capaticy>>V>>des>>E;
//	adj.resize(V+1);
//	for (int i = 1; i <= V; ++i)
//	{
//		int c;
//		cin>>c;
//		weights[i]=c;
//	}
//	int s1,s2,d;
//	for (int i = 0; i < E; ++i)
//	{
//		scanf("%d %d %d",&s1,&s2,&d);
//		
//		adj[s1].push_back(make_pair(s2,edge(d)));
//		adj[s2].push_back(make_pair(s1,edge(d)));
//	}
//	fill(disTo,disTo+501,2147483647);
//	disTo[0] = 0;
//	q.push(0);
//	while (!q.empty())
//	{
//		int temp=q.front();
//		q.pop();
//		onQ[temp]=false;
//		relax(temp);
//	}
//	
//	stack<int> stack;
//	int sum=0;
//	for (int i = des; i != 0; i = pathTo[i])
//	{
//		stack.push(i);
//		sum += weights[i];
//	}
//	bool flag;
//	sum = sum- (capaticy/2)*stack.size();
//	if (sum>0)
//	{
//		flag = true;
//	}
//	else
//	{
//		flag = false;
//	}
//	if (false == flag)
//	{
//		cout<<abs(sum);
//	}
//	else { cout<<"0"; }
//	cout<<" 0";
//	while (!stack.empty())
//	{
//		cout<<"->"<<stack.top();
//		stack.pop();
//	}
//	if (true == flag)
//	{
//		cout<<" "<<abs(sum);
//	}
//	else { cout<<" 0\n"; }
//	return 0;
//}
