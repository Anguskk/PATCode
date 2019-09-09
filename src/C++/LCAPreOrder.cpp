//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace  std;
//vector<int> preOrder;
//void findAncestor(int tempRoot,int p1,int p2,int N)
//{
//	if (preOrder[p1] == preOrder[tempRoot])
//	{
//		printf("%d is an ancestor of %d.\n",preOrder[p1],preOrder[p2]);
//		return;
//	}
//	else if (preOrder[p2] == preOrder[tempRoot])
//	{
//		printf("%d is an ancestor of %d.\n",preOrder[p2],preOrder[p1]);
//		return;
//	}
//	else if ((preOrder[p1] -preOrder[tempRoot])*(preOrder[p2]-preOrder[tempRoot])<0)
//	{
//		printf("LCA of %d and %d is %d.\n",preOrder[p1],preOrder[p2],preOrder[tempRoot]);
//		return;
//	}
//	else
//	{
//		if (preOrder[tempRoot] > preOrder[p1])
//		{
//			for (int i = tempRoot+1; i <=N ; ++i)
//			{
//				if (preOrder[i] < preOrder[tempRoot])
//				{
//					tempRoot = i;
//					break;
//				}
//			}
//			
//		}
//		else
//		{
//			for (int i = tempRoot+1; i <=N ; ++i)
//			{
//				if (preOrder[i] >= preOrder[tempRoot])
//				{
//					tempRoot = i;
//					break;
//				}
//			}
//		}
//		findAncestor(tempRoot,p1,p2,N);
//	}	
//
//}
//
//int LCA_BST(int argc, char* argv[])
//{
//	map<int,int> pos;
//	int T,N;cin>>T>>N;
//	
//	preOrder.resize(N+1);
//	
//	for (int i = 1; i <= N; ++i)
//	{
//		scanf("%d",&preOrder[i]);
//		pos[preOrder[i]] = i;
//	}	
//	
//	int  parent = pos[preOrder[1]];
//	for (int i = 0; i < T; ++i)
//	{
//		int n1,n2;scanf("%d %d",&n1,&n2);
//		if (pos[n1] == 0 && pos[n2] ==0)
//		{
//			printf("ERROR: %d and %d are not found.\n", n1, n2);
//		}
//		else if (pos[n1] == 0 || pos[n2] ==0)
//		{
//			printf("ERROR: %d is not found.\n", pos[n1] == 0 ? n1 : n2);
//		}
//		else
//		{ 
//			int p1=pos[n1],p2=pos[n2];
//			findAncestor(1,p1,p2,N);
//		}
//		
//	}
//	return 0;
//}
