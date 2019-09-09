#include <iostream>
using namespace  std;
struct _Node
{
	int key,val;
	int level,rank;
	int left;
	int right;
	int sizes;
	_Node()
	{
		left= -1,right=-1;
		level=0,rank=0,sizes=1;
	}
};

_Node nodes_[1005];
int countSizes(int p)
{
	if (p == -1)
	{
		return 0;
	}
	return nodes_[p].sizes;
	
}
void buildBST(int p,int key,int val,int Lv,int &maxn)
{	
	
	if (val <= nodes_[p].val)
	{
		if (nodes_[p].left != -1)
		{
			buildBST(nodes_[p].left,key,val,Lv+1,maxn);
		}
		else
		{
			nodes_[p].left  = key;
			nodes_[key].level = Lv;
			if (Lv > maxn)
			{
				maxn = Lv;
			}
			nodes_[key].val = val;
			
		}		
	}
	else if (val > nodes_[p].val)
	{
		if (nodes_[p].right != -1)
		{
			buildBST(nodes_[p].right,key,val,Lv+1,maxn);
		}
		else
		{
			nodes_[p].right  = key;
			nodes_[key].level = Lv;
			if (Lv > maxn)
			{
				maxn = Lv;
			}
			nodes_[key].val = val;
		}	
	}
	nodes_[p].sizes=countSizes(nodes_[p].left)+countSizes(nodes_[p].right)+1;
}

int CountingNodesInBST(int argc, char* argv[])
{
	int n;cin>>n;
	int t;
	scanf("%d",&t);
	nodes_[0].val = t;
	nodes_[0].key = 0;
	int maxn=0;
	for (int i = 1; i < n; ++i)
	{		
		scanf("%d",&t);
		buildBST(0,i,t,1,maxn);
	}
	int cnt1=0,cnt2=0;
	for (int i = 0; i < n; ++i)
	{
		if (nodes_[i].level == maxn)
		{
			cnt1 +=1;
		}
		else if (nodes_[i].level == maxn-1)
		{
			cnt2 +=1;
		}
		
	}
	printf("%d + %d = %d",cnt1,cnt2,cnt1+cnt2);
	return 0;
}
