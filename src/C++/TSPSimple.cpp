#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace  std;

struct edge
{
	pair<int,int> pEdge;
	int dist;
	edge(pair<int,int> p1,int d){
		this->pEdge = p1;
		this->dist = d;
	}
};
int isConnect[201][201]={0};
vector<edge> edges;



int  TSPSimple(int argc, char* argv[])
{
	int isConnect[201][201]={0};
	vector<edge> edges;


	int N,M;
	cin>>N>>M;
	for (int i = 0; i < M; ++i)
	{
		int i1,i2,dist;
		scanf("%d %d %d",&i1,&i2,&dist);
		isConnect[i1][i2]=dist;
		isConnect[i2][i1]=dist;
		//edges.push_back(edge(make_pair(i1,i2),dist));

	}
	int query;cin>>query;
	unordered_map<int,int> record;
	int min;int sumbefore=2147483647;
	for (int i = 1; i <= query; ++i)
	{
		int isvisit[201]={0};
		int nums;cin>>nums;
		vector<int> citys;
		citys.resize(nums);
		for (int j = 0; j < nums; ++j)
		{
			scanf("%d",&citys[j]);

		}
		
		char flag='a';
		if (citys[0] !=citys[nums-1])
		{
			flag='c';
			//printf("Path %d: NA",i,);
		}
		int sum=0;
		int check=0;
		for (int k = 1; k < nums; ++k)
		{
		
			if (isConnect[citys[k]][citys[k-1]]==0 )
			{
				flag='d';
				break;
			}
			sum += isConnect[citys[k]][citys[k-1]];
			check +=1;
		}
		if (flag=='d')
		{
			printf("Path %d: NA (Not a TS cycle)\n",i);
			continue;
		}

		if (flag=='c' ||check<N)
		{
			printf("Path %d: %d (Not a TS cycle)\n",i,sum);
			continue;
		}
		
		record[i]=sum;
		if (sum<sumbefore)
		{
			sumbefore = sum;
			min = i;
		}
		
		if (check > N)
		{
			flag='b';
			printf("Path %d: %d (TS cycle)\n",i,sum);
			continue;
		}
		if (flag=='a')
		{
			printf("Path %d: %d (TS simple cycle)\n",i,sum);
		}
		
	}
	printf("Shortest Dist(%d) = %d",min,record[min]);

	return 0;
}
