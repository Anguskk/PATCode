// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <queue>
// using namespace  std;
// vector<int> postOrder,inOrder,result[40];
// struct TreeNode
// {
// 	int index;
// 	//int val;
// 	int depth;
// 	TreeNode(int _index,int _depth)
// 	{
// 		index = _index;
// 		depth = _depth;
// 	}
// };
// int mytree[35][2]={0};
// void  dfsConstruct(int &index,int Inleft,int Inright,int Postleft,int PostRight)
// {
// 	if (Inleft>Inright)
// 	{
// 		return;
// 	}
// 	index = PostRight;
// 	for (int i = Inleft; i <= Inright; ++i)
// 	{
// 		if (inOrder[i] == postOrder[PostRight])
// 		{
// 			dfsConstruct(mytree[index][0],Inleft,i-1,Postleft,Postleft+(i-1-Inleft));
// 			dfsConstruct(mytree[index][1],i+1,Inright,Postleft+i-Inleft,PostRight-1);
// 		}
// 	}
// }
// void bfs_zigzag(int root)
// {
// 	queue<TreeNode> q;	
// 	q.push(TreeNode(root,0));
// 	while (!q.empty())
// 	{
// 		TreeNode  t = q.front();
// 		q.pop();
// 		result[t.depth].push_back(postOrder[t.index]);
// 		if (mytree[t.index][0]!=0)
// 		{
// 			q.push(TreeNode(mytree[t.index][0],t.depth+1));
// 		}
// 		if (mytree[t.index][1]!=0)
// 		{
// 			q.push(TreeNode(mytree[t.index][1],t.depth+1));
// 		}
// 	}
// }
// int zigzagTranverse(int argc, char* argv[])
// {
// 	int n;cin>>n;
// 	postOrder.resize(n+1);inOrder.resize(n+1);
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		int temp;cin>>temp;
// 		inOrder[i]=temp;
// 	}
// 	for (int i = 1; i <=n; ++i)
// 	{
// 		int temp;cin>>temp;
// 		postOrder[i]=temp;
// 	}
// 	int root;
// 	dfsConstruct(root,1,n,1,n);
// 	bfs_zigzag(root);
// 	printf("%d",result[0][0]);
// 	for (int i = 1; i < 35; ++i)
// 	{
// 		if (result[i].size()>0)
// 		{
// 			if (i%2 != 0)
// 			{
// 				for (int j = 0; j < result[i].size(); ++j)
// 				{
// 					printf(" %d",result[i][j]);
// 				}	
// 			}
// 			else
// 			{
// 				
// 				for (int j = result[i].size()-1; j >=0; --j)
// 				{
// 					printf(" %d",result[i][j]);
// 				}	
// 			}
// 			
// 			
// 		}
// 	}
// 	return 0;
// }
