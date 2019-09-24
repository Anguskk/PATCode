#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool visited[1001];
int disTo[1001];
int edgeTo[1001];
vector<  vector<pair<int,int >> > adj;
void initialize()
{
	memset(visited,false,sizeof(visited)/sizeof(bool));
	fill(std::begin(disTo), std::end(disTo),0);
	fill(std::begin(edgeTo), std::end(edgeTo),-1);
}
void Dijkstra(vector<int> &vQuery,bool &isTrue)
{
	int s=vQuery[0];edgeTo[s]=s;visited[s]=true;
	set<int> AvailablePath;
	for (int i = 0; i <adj[s].size() ; ++i)
	{
		pair<int,int> p=adj[s][i];
		if (!visited[p.first])
		{
			AvailablePath.insert(p.second);
			edgeTo[p.first]=s;
			//visited[p.first]=true;
		}
	}
	for (int i =1; i < vQuery.size(); ++i)
	{
		int temp=vQuery[i];
		auto it=AvailablePath.begin();
		bool flag=false;
		for (int j = 0; j <adj[temp].size() ; ++j)
		{
			if (visited[adj[temp][j].first] && adj[temp][j].second + disTo[adj[temp][j].first] <=(*it))
			{
				flag = true;
				if (adj[temp][j].second + disTo[adj[temp][j].first] ==(*it))
				{
					AvailablePath.erase(it);
				}				
				visited[temp] = true;
				disTo[temp] = adj[temp][j].second + disTo[adj[temp][j].first];
				for (int k = 0; k < adj[temp].size(); ++k)
				{
					if (!visited[adj[temp][k].first] )
					{
						AvailablePath.insert(disTo[temp]+adj[temp][k].second);
					}
				}
				break;
			}

		}
		if (!flag)
		{
			isTrue = false;
			return;
		}
	}
}
int DijkstraSequence(int argc, char* argv[])
{
	int V,E;cin>>V>>E;
	adj.resize(V+1);
	for (int i = 1; i <=E; ++i)
	{
		int v1,v2,l;
		scanf("%d %d %d",&v1,&v2,&l);
		adj[v1].push_back(make_pair(v2,l));
		adj[v2].push_back(make_pair(v1,l));
	}
	int query;cin>>query;
	for (int i = 0; i < query; ++i)
	{
		vector<int> sequence;sequence.resize(V);
		for (int i = 0; i < V; ++i)
		{
			scanf("%d",&sequence[i]);
		}
		initialize();
		bool isSatisfy=true;
		Dijkstra(sequence,isSatisfy);
		if (isSatisfy)
		{
			printf("Yes\n");
		}
		else {printf("No\n");
  }

	}
	return 0;
}
