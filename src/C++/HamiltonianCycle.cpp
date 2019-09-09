#include <iostream>
#include <vector>
#include <set>
using namespace  std;

int HamiltonCycle(int argc, char* argv[])
{
	bool G[1201][1201];
int isVisit[201];
	int N,M;
	cin>>N>>M;
	for (int i = 0; i < M; ++i)
	{
		int i1,i2;
		scanf("%d %d ",&i1,&i2);
		G[i1][i2]=true;
		G[i2][i1]=true;		

	}
	int query;cin>>query;
	
	
	for (int i = 1; i <= query; ++i)
	{
		bool flag=true;
		int V;cin>>V;
		//memset(isVisit,0,sizeof(flag)/sizeof(bool));
		set<int> isrepeat;
		vector<int> vertexs;
		int temp;	
		for (int j = 1; j <=V; ++j)
		{
			
			scanf("%d",&temp);
			vertexs.push_back(temp);
			isrepeat.insert(temp);
		}

		if (V !=N+1 || vertexs[0]!=vertexs[V-1] ||isrepeat.size()!=N)
		{
			flag= false;	
		}
		
		if (flag)
		{
			for (int i = 1; i < V; ++i)
			{
				if (G[vertexs[i-1]][vertexs[i]] == false)
				{
					flag=false;
					break;
				}
			}
		}
		if (flag==false)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
		
	}
	return 0;
}
