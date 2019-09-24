#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace  std;
struct  node_
{
	int left;
	int right;
	int pos;
	bool isLeaf;

};
node_  myNodes[21];
bool findRoot[21];
void levelTranverse(int root,stack<int> &ans)
{
	queue<int> q;
	q.push(root);
	while (!q.empty())
	{
		int temp=q.front();
		ans.push(temp);
		q.pop();
		if (myNodes[temp].left != -1)
		{
			q.push(myNodes[temp].left);
			myNodes[myNodes[temp].left].pos=myNodes[temp].pos*2;
		}
		if (myNodes[temp].right != -1)
		{
			q.push(myNodes[temp].right);
			myNodes[myNodes[temp].right].pos=myNodes[temp].pos*2+1;
		}
	}
}
// int maxn=-1,ans;
// void dfs(int root, int index) {
//     if(index > maxn) {
//         maxn = index;
//         ans = root;
//     }
//     if(myNodes[root].left != -1) dfs(myNodes[root].left, index * 2);
//     if(myNodes[root].right != -1) dfs(myNodes[root].right, index * 2 + 1);
// }
int completeBinaryTree(int argc, char* argv[])
{
	int N;cin>>N;getchar();
	for (int i = 0; i < N; ++i)
	{
		int temp;
		string l,r;
		cin>>l>>r;
		getchar();
		if (l == "-")
		{
			myNodes[i].left = -1;
		}
		else
		{
			temp =stoi(l);
			myNodes[i].left = temp;
			findRoot[temp]  = true;
		}
		if (r == "-")
		{
			myNodes[i].right = -1;
		}
		else
		{
			temp =stoi(r);
			myNodes[i].right = temp;
			findRoot[temp]  = true;
		}
		if (l=="-" && r== "-")
		{
			myNodes[i].isLeaf = true;
		}
	}
	int parent=-1;
	for (int i = 0; i < N; ++i)
	{
		if (findRoot[i] == false)
		{
			parent = i;
			break;
		}
	}
	//bool isComplete=true;
	stack<int> ans;
	myNodes[parent].pos = 1;
	levelTranverse(parent,ans);
	//dfs(parent,1);
	// for (int i = 0; i < N; ++i)
	// {
	// 	if (!myNodes[i].isLeaf)
	// 	{
	// 		if (myNodes[i].left == -1 || myNodes[i].right == -1)
	// 		{
	// 			isComplete =false;
	// 			break;
	// 		}
	// 	}
	// }
	if (myNodes[ans.top()].pos == N)
	{		
		printf("YES %d\n",ans.top());
	}
	else
	{
		printf("NO %d\n",parent);
	}
	return 0;
}
