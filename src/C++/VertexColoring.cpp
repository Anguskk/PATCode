#include <iostream>
#include <queue>
#include <set>

using namespace std;
#include <vector>
struct Vertex
{
	//vector<int> adj;
	int color;
};
//可能有10000中颜色
bool colors[10007]={false};
//bool mark[10007];
//bool isconnect[100008][10008];


//bool bfs(int s)
//{
//	bool flag=true;
//	queue<int> q;
//	//mark[s]=true;
//	q.push(s);
//	while (!q.empty())
//	{
//		Vertex temp=vetexs[q.front()];
//		q.pop() ;
//		for (int i = 0; i < temp.adj.size(); ++i)
//		{
//			if (temp.color == vetexs[temp.adj[i]].color)
//				{
//					flag=false;
//					break;
//				}
//			if (!mark[temp.adj[i]])
//			{
//				q.push(temp.adj[i]);
//				mark[temp.adj[i]]=true;
//				
//			}
//		}
//	
//		if (flag == false)
//		{
//			break;
//		}
//	}
//	return  flag;	
//}
int VetexColoring()
{
	int N,M;cin>>N>>M;
	vector<Vertex> vetexs;
	vetexs.resize(N);
	vector<pair<int,int>> edges;
	for (int i = 1; i <= M; ++i)
	{
		int i1,i2;
		scanf("%d %d",&i1,&i2);
		
		edges.push_back(make_pair(i1,i2));
		/*vetexs[i1].adj.push_back(i2);
		vetexs[i2].adj.push_back(i1);*/
	}
	int query;cin>>query;
	
	for (int i = 0; i < query; ++i)
	{
		memset(colors,false,sizeof(colors)/sizeof(bool));
		//memset(mark,false,sizeof(mark)/sizeof(bool));
		
		//set<int> colors;
		int cnt=0;
		for (int i = 0; i < N; ++i)
		{
			int colr;
			scanf("%d",&colr);
			vetexs[i].color=colr;
			if (colors[colr] == false)
			{
				cnt++;
				colors[colr] = true;
			}
			//colors.insert(colr);
			
		}
		bool flag=false;
		for (int i = 0; i < edges.size(); ++i)
		{
			int p1=edges[i].first;
			int p2=edges[i].second;
			if (vetexs[p1].color == vetexs[p2].color)
			{
				flag=true;
				break;
			}
		}
		if (flag)
		{
			cout<<"No"<<endl;
			
		}
		else { printf("%d-coloring\n",cnt);}
		
	}
	return 0;
}