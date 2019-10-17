#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
#include <map>
struct station
{
	int id;
	vector<pair<int,int>> adj;	
};
station myStaion[10000];
int cnts[10000];
bool isvisit[10000];
//bool isCheck[10000];
bool  isDone;
vector<pair<int,int>> finalRoute;
int minTotal,minTrans,source,termination;

void dfs(int from,int total,int trans,vector<pair<int,int>> v){
	if (isDone)
	{
		return;
	}
	isvisit[from] = true;	
	
	for (int i = 0; i <myStaion[from].adj.size(); ++i)
	{
		int temp = myStaion[from].adj[i].first;
		if (temp == termination)
		{
			if (total+1 < minTotal)
			{
				minTotal = total+1;
				v.push_back(myStaion[from].adj[i]);
				finalRoute = v;
			}else if(total == minTotal){
				if (trans < minTrans )
				{
					minTrans = trans;
					finalRoute = v;
					finalRoute.push_back(myStaion[from].adj[i]);
				}
			}

			return;
		}
		else
		{
			if (!isvisit[temp] || cnts[temp]>1)
			{
				if (cnts[temp] >1)
				{
					trans +=1;
					v.push_back(myStaion[from].adj[i]);
				}
				dfs(temp,total+1,trans,v);
			}
		}
		
	}
	bool flag1=true;
	for (int i = 0; i < myStaion[termination].adj.size(); ++i)
	{
		int tempp=myStaion[termination].adj[i].first;
		if (!isvisit[tempp])
		{
			flag1 = false;
			break;
		}
	}
	if (flag1)
	{
		isDone = true;
	}
}
int SubwayMap(int argc, char  *argv[])
{
	int n;cin>>n;
	for (int l = 0; l < n; ++l)
	{
		int n1,start,pre;
		cin>>n1;
		vector<int> line;		
		std::map<int, int> map1;		
		for (int i = 0; i < n1; ++i)
		{
			int temp;
			if (i==0)
			{
				scanf("%d",&start);
				cnts[start ] +=1;
				pre = start;
				myStaion[start].id = pre;
			}else{
				scanf("%d",&temp);
				cnts[temp] +=1;
				myStaion[temp].id = temp;
				myStaion[temp].adj.push_back(make_pair(pre,l));
				myStaion[pre].adj.push_back(make_pair(temp,l));
				pre= temp;
			}
			if (i == n1-1)
			{
				if (temp == start)
				{
					//TODO ±ÕºÏ
					cnts[start]  = cnts[start] -1;
				}
			}
			
		}
	}
	int query;cin>>query;
	for (int i = 0; i < query; ++i)
	{
		minTotal= 2147483647;
		minTrans =2147483647;
		cin>>source>>termination;
		int total=0;
		isDone = false;
		finalRoute.clear();
		vector<pair<int,int>> vTransfer;
		memset(isvisit,false,sizeof(isvisit));
		//memset(isvisit,false,sizeof(isCheck));
		isvisit[source] = true;
		dfs(source,0,0,vTransfer);
	}
	return 0;
}