#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <queue>
using  namespace std;
struct leaf_Node
{
	bool isOn;
	bool isLeaf;
	int level;
	int parent;
	vector<int> childs;
	leaf_Node(){
		this->isLeaf = true;
		this->level = 0 ;
		this->parent = 0;
		this->isOn = false;

	}
};
leaf_Node nodes[101];
int updateLevel(int i)
{
	int cnt=0;
	while (nodes[i].parent != 0)
	{
		i= nodes[i].parent;
		cnt++;
	}
	return cnt;
}
void levelScan(vector<int> &Vec_cnt)
{
	queue<int> q;
	q.push(1);
	int tempLevel=1;
	int childleaf_cnt = 0;
	int pre=1;
	while (! q.empty())
	{
		int temp = q.front();
		if (nodes[pre].level != nodes[temp].level)
		{
			tempLevel +=1;
			Vec_cnt.push_back(childleaf_cnt);
			childleaf_cnt =0;
		}
		for (int i = 0; i < nodes[temp].childs.size(); ++i)
		{
			q.push(nodes[temp].childs[i]);
			if (nodes[nodes[temp].childs[i]].isLeaf == true && nodes[nodes[temp].childs[i]].level==tempLevel)
			{
				childleaf_cnt++;				
			}
		}
		pre= temp;
		q.pop();
	}
}
int main(int argc, char* argv[])
{
	int N,M;
	cin>>N>>M;
	if (N == 0)
	{
		return 0;
	}
	else if (N == 1)
	{
		cout<<1<<endl;
		return 0;
	}
	
	nodes[1].isOn =true;
	nodes[1].parent = 0;
	nodes[1].level = 0;
	for (int i=0;i<M;i++)
	{
		int id;
		int k;
		int child_id;
		scanf("%d %d",&id,&k);
		nodes[id].isLeaf = false ;
		for (int j=0;j<k;j++)
		{
			scanf("%d",&child_id);
			nodes[id].childs.push_back(child_id);
			nodes[child_id].isOn =true;
			nodes[child_id].parent = id;
			
		}
	}
	
	for (int i = 1; i <= N; ++i)
	{
		if (nodes[i].isOn == true)
		{
			nodes[i].level = updateLevel(i);
		}
	}
	vector<int> cnt;
	cnt.push_back(0);
	levelScan(cnt);
	cout<<cnt[0];
	for (int i = 1; i < cnt.size(); ++i)
	{
		printf(" %d",cnt[i]);	
	}

	system("pause");
	return 0;	
}
