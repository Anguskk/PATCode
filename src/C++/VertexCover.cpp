#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
////bool vertex[10001];
//int  VertexCover(int argc, char* argv[])
//{
//	int V,E;
//	cin>>V>>E;
//	vector<pair<int,int>> edges;
//	for (int i = 0; i <E; ++i)
//	{
//		int i1,i2;
//		scanf("%d %d",&i1,&i2);
//		edges.push_back(make_pair(i1,i2));
//	}
//	int query;cin>>query;
//	for (int i = 0; i < query; ++i)
//	{
//		memset(vertex,false,sizeof(vertex)/sizeof(bool));
//		int  n1;cin>>n1;
//		for (int j = 0; j < n1; ++j)
//		{
//			int v1;
//			scanf("%d",&v1);
//			vertex[v1]=true;
//		}
//		bool flag=true;
//		for (int i1 = 0; i1 < edges.size(); ++i1)
//		{
//			if ( vertex[edges[i1].first] == false && vertex[edges[i1].second]==false)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag==false)
//		{
//			cout<<"No"<<endl;
//		}
//		else
//		{
//			cout<<"Yes"<<endl;
//		}
//	}
//	return 0;
//}
