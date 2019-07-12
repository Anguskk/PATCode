#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <queue>
using  namespace std;
int cntttttttttttt=0;
//bool cmp(int a, int b){
//	return a<b;
//}

typedef  struct tree
{
	int key;
	int val;
	struct tree *left;
	struct  tree *right;
	
}tree;
tree binarytree[100];
//传入key 父节点
//前序遍历建树
void buildTree(tree tree[],int key)
{
	
	if (key == -1)
	{
		//TODO -1 -1
		return;	
	}
	tree[key].key = key;
	int leftKey,rightKey;
	cin>>leftKey>>rightKey;
	if (leftKey!=-1)
	{
		tree[key].left = &tree[leftKey];
	}
	if (rightKey!=-1)
	{
		tree[key].right = &tree[rightKey];
	}	
	if (leftKey !=-1)
	{
		buildTree(tree,leftKey);
	}
	if (rightKey !=-1)
	{
		buildTree(tree,rightKey);
	}	

}

void insertVal(tree tree[],vector<int> & vec,int key)
{
	//中序遍历插值
	if (tree[key].left != NULL)
	{
		insertVal(tree,vec,tree[key].left->key);
	}
	//TODO
	tree[key].val = vec[cntttttttttttt++];
	
	if (tree[key].right != NULL)
	{
		insertVal(tree,vec,tree[key].right->key);
	}
	
}
void levelTranverse(tree trees[],int root)
{
	vector<int> vals;
	queue<int> q;
	q.push(root);
	while (!q.empty())
	{
		int temp =q.front();
		vals.push_back(trees[temp].val);
		if (trees[temp].left!=NULL)
		{
			q.push(trees[temp].left->key);
		}
		if (trees[temp].right!=NULL)
		{
			q.push(trees[temp].right->key);
		}
		q.pop();
	}
	
	cout<<vals[0];
	for (int i=1;i<vals.size();i++)
	{
		cout<<" "<<vals[i];
	}

}
int buildabTree()
{
	vector<int> vecInt;
	int N;
	cin>>N;
	
	buildTree(binarytree,0);
	//for (int i = 0; i < N; ++i)
	//{
	//	int left;
	//	int right;
	//	scanf("%d %d",&left,&right);
	//	
	//}
	for (int i=0;i<N;i++)
	{
		int temp;
		cin>>temp;
		vecInt.push_back(temp);
	}	
	stable_sort(vecInt.begin(),vecInt.end());
//	int cnt=0;
	insertVal(binarytree,vecInt,0);
	levelTranverse(binarytree,0);
	system("pause");
	return 0;
}