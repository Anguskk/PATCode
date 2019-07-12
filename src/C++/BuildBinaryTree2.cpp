//1099. Build A Binary Search Tree 
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <queue>
using  namespace std;
int cnt=0;
bool cmp(int a, int b){
	return a<b;
}

typedef  struct tree
{	
	int val;
	int left;
	int right;
	
}tree;
vector<tree> vecTree;
//传入key 父节点

void insertVal(int root, vector<int> & vec , int &cnt)
{
	//中序遍历插值
	if (vecTree[root].left != -1)
	{
		insertVal(vecTree[root].left,vec,cnt);
	}
	//TODO
	vecTree[root].val = vec[cnt++];
	
	if (vecTree[root].right != -1)
	{
		insertVal(vecTree[root].right,vec,cnt);
	}
	
}
void levelTranverse(int root)
{
	vector<int> vals;
	queue<int> q;
	q.push(root);
	while (!q.empty())
	{
		int temp =q.front();
		vals.push_back(vecTree[temp].val);
		if (vecTree[temp].left!=-1)
		{
			q.push(vecTree[temp].left);
		}
		if (vecTree[temp].right!= -1)
		{
			q.push(vecTree[temp].right);
		}
		q.pop();
	}
	
	cout<<vals[0];
	for (int i=1;i<vals.size();i++)
	{
		cout<<" "<<vals[i];
	}

}
int buildAbinarytree()
{
	vector<int> vecInt;
	int N;
	cin>>N;
	vecTree.resize(N);
	for (int i = 0; i < N; ++i)
	{
		int left;
		int right;
		scanf("%d %d",&left,&right);
		vecTree[i].left = left;
		vecTree[i].right = right;
		
	}
	for (int i=0;i<N;i++)
	{
		int temp;
		cin>>temp;
		vecInt.push_back(temp);
	}	
	stable_sort(vecInt.begin(),vecInt.end(),cmp);
	int cnt=0;
	insertVal(0,vecInt,cnt);
	levelTranverse(0);
	system("pause");
	return 0;
}