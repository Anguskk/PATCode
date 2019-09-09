#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
struct Vertex{

	bool adj[201];
};
vector<Vertex> v;
bool cliqueset[201];
int  MaximalClique(int argc, char* argv[])
{
	int V,E;
	cin>>V>>E;
	
	v.resize(V+1);
	for (int i = 0; i <E; ++i)
	{
		int i1,i2;
		scanf("%d %d",&i1,&i2);
		v[i1].adj[i2]=true;
		v[i2].adj[i1]= true;
	}
	int query;cin>>query;
	for (int i = 0; i < query; ++i)
	{
		memset(cliqueset,false,sizeof(cliqueset)/sizeof(bool));
		vector<int> clique;		
		//clique.resize(V+1);
		int  n1;cin>>n1;
		for (int j = 0; j < n1; ++j)
		{
			int v1;
			scanf("%d",&v1);
			cliqueset[v1]=true;
			clique.push_back(v1);
		}
		bool flag=true;
		for (int i = 0; i < clique.size(); ++i)
		{
			for (int j = 0; j < clique.size(); ++j)
			{
				if (i==j)
				{
					continue;
				}
				if (v[clique[i]].adj[clique[j]]==false)
				{
					flag=false;
					break;
				}
			}
			if (flag==false)
			{
				break;
			}
			
		}
		if (flag)
		{
		  	vector<int> complement;
		    for (int i = 1; i <=V; ++i)
		    {
			    if (!cliqueset[i])
			    {
				    complement.push_back(i);
			    }
		    }
			int flag2=true,flag3=false;
		    for (int i = 0; i < complement.size(); ++i)
		    {
				int cnt=0;
			    for (int j = 0; j < clique.size(); ++j)
			    {
				    if (v[complement[i]].adj[clique[j]] == false)
				    {
					    flag2=false;
				    	break;
				    }
				    else { cnt +=1; }
			    }			    
				if (cnt==clique.size())
				{
					flag3 = true;
					break;
				}
		    }
		    if (!flag3)
		    {
			    cout<<"Yes"<<endl;
		    }
		    else
		    {
			    cout<<"Not Maximal"<<endl;
		    }
		}
		else 
		{
			cout<<"Not a Clique"<<endl;
			
		}
		
	}
	return 0;
}