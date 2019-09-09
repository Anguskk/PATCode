// #include <vector>
// #include <iostream>
// using namespace std;
// struct node_
// {
//  
// 	int key,val,left,right;
// 	node_()
// 	{
// 		left=-1,right=-1;
// 	}
// };
// node_ tNodes_[1005];
// vector<int> vPre;
// vector<int> vPreReverse;
// vector<int> vPost;
// void preOrder(int parent , vector<int> &vPre)
// {
// 	vPre.push_back(tNodes_[parent].val);
// 	if (tNodes_[parent].left != -1)
// 	{		
// 		preOrder(tNodes_[parent].left,vPre);
// 		//return;
// 	}	
// 	if (tNodes_[parent].right != -1)
// 	{		
// 		preOrder(tNodes_[parent].right,vPre);		
// 	}
// 	
//
// }
// void preOrderRe(int parent , vector<int> &vPreReverse)
// {
// 	vPreReverse.push_back(tNodes_[parent].val);
// 	if (tNodes_[parent].right != -1)
// 	{		
// 		preOrderRe(tNodes_[parent].right,vPreReverse);		
// 	}
// 	if (tNodes_[parent].left != -1)
// 	{		
// 		preOrderRe(tNodes_[parent].left,vPreReverse);
// 		
// 	}	
// 	
// }
// void postOrder(int parent , vector<int> &vPost)
// {
// 	
// 	if (tNodes_[parent].left != -1)
// 	{		
// 		postOrder(tNodes_[parent].left,vPost);
// 		//return;
// 	}	
// 	if (tNodes_[parent].right != -1)
// 	{		
// 		postOrder(tNodes_[parent].right,vPost);		
// 	}
// 	vPost.push_back(tNodes_[parent].val);
// 	
//
// }
// void postOrderRe(int parent , vector<int> &vPost)
// {
// 	
// 	if (tNodes_[parent].right != -1)
// 	{		
// 		postOrderRe(tNodes_[parent].right,vPost);		
// 	}
// 	if (tNodes_[parent].left != -1)
// 	{		
// 		postOrderRe(tNodes_[parent].left,vPost);
// 		//return;
// 	}		
// 	vPost.push_back(tNodes_[parent].val);	
//
// }
// void BSTConstruct(int parent,  node_ &t)
// {
// 	if (t.val < tNodes_[parent].val)
// 	{
// 		if (tNodes_[parent].left  != -1)
// 		{
// 			BSTConstruct(tNodes_[parent].left,t);
// 		}
// 		else
// 		{
// 			tNodes_[parent].left = t.key;
// 			return;
// 		}
// 	}
// 	else
// 	{
// 		if (tNodes_[parent].right  != -1)
// 		{
// 			BSTConstruct(tNodes_[parent].right,t);
// 		}
// 		else
// 		{
// 			tNodes_[parent].right = t.key;
// 			return;
// 		}
// 	}
// }
// vector<int> input;
// bool vCompare(vector<int> &v1,vector<int> &v2)
// {
// 	for (int i = 0; i < v1.size(); ++i)
// 	{
// 		if (v1[i] != v2[i])
// 		{
// 			return false;
// 		}
// 	}
// 	return true;
// }
// int isItBST(int argc, char* argv[])
// {
// 	int n;cin>>n;
// 	
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		int val;
// 		scanf("%d",&val);
// 		input.push_back(val);
// 		tNodes_[i].key = i;
// 		tNodes_[i].val =val;
// 		
// 	}
// 	for (int i = 2; i <= n; ++i)
// 	{
// 		BSTConstruct(1,tNodes_[i]);
// 	}
// 	preOrder(1,vPre);
// 	preOrderRe(1,vPreReverse);
// 	
// 	bool ans=true;
// 	if ( vCompare(vPre,input))
// 	{
// 		printf("YES\n");
// 		postOrder(1,vPost);
// 	}
// 	else if (vCompare(vPreReverse,input))
// 	{
// 		printf("YES\n");
// 		postOrderRe(1,vPost);
// 	}
// 	else
// 	{
// 		ans =false;
// 		printf("NO\n");
// 	}
// 	if (ans)
// 	{
// 		for (int i = 0; i < vPost.size(); ++i)
// 		{
// 			if (i==0)
// 			{
// 				printf("%d",vPost[i]);
// 			}
// 			else
// 			{
// 				printf(" %d",vPost[i]);
// 			}
// 		}
// 	}
// 	
// 	return 0;
// }
//
//
