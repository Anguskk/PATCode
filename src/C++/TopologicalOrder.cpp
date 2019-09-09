#include <iostream>
#include <string>

#include <algorithm>
#include <map>
#include <unordered_map>
using namespace  std;

int TopologicalOrder(int argc, char* argv[])
{
	int edges[1001][1001];
	int N,E;
	cin>>N>>E;
	for (int i = 1; i <= E; ++i)
	{
		int from,to;
		scanf("%d %d",&from,&to);
		edges[from][to]=1;
		edges[to][from]=-1;
	}
	int query;cin>>query;
	vector<int> querys;
	for (int i = 0; i < query; ++i)
	{
		bool flag=true;
		vector<int> nodes;
		nodes.resize(N+1);
		for (int i = 1; i <= N; ++i)
		{
			scanf("%d",&nodes[i]);
		}
		for (int j = 2; j <=N ; ++j)
		{
			if (edges[nodes[j-1]][nodes[j]] == -1)
			{
				flag=false;
				break;
			}
		}
		if (flag == false)
		{
			querys.push_back(i);
		}
	}
	cout<<querys[0];
	for (int i = 1; i < querys.size(); ++i)
	{
		cout<<" "<<querys[i];
	}

	return 0;
}
