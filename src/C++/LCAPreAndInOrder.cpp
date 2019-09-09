//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//using namespace  std;
//vector<int> inOrder,preOrder;
//int mytree[10005][2];
//
////int Tparent[10005];
////int pos[10005];
//map<int,int> pos;
//void  dfsCons(int &index,int Inleft,int Inright,int preLeft,int preRight)
//{
//	if (Inleft>Inright)
//	{
//		return;
//	}
//	index = pos[preOrder[preLeft]];
//	for (int i = Inleft; i <= Inright; ++i)
//	{
//		if (inOrder[i] == preOrder[preLeft])
//		{
//			dfsCons(mytree[index][0],Inleft,i-1,preLeft+1,preLeft+i-Inleft);
//			//Tparent[mytree[index][0]] = index;
//			dfsCons(mytree[index][1],i+1,Inright,preLeft+1+i-Inleft,preRight);
//			//Tparent[mytree[index][1]] = index;
//		}
//	}
//}
//// bool check(int n1, int n2,int N)
//// {
//// 	bool ans=false;
//// 	bool flag1=true,flag2=true;
//// 	if ( !(n1>0 && n1 <=N))
//// 	{
//// 		flag1 = false;
//// 	}
//// 	if ( !(n2>0 && n2 <=N))
//// 	{
//// 		flag2 = false;
//// 	}
//// 	if ( (!flag1) && (!flag2))
//// 	{
//// 		printf("ERROR: %d and %d are not found.\n",n1,n2);
//// 	}
//// 	else if ((!flag1) || (!flag2))
//// 	{
//// 		printf("ERROR: %d is not found.\n",flag1?n2:n1);
//// 	}
//// 	
//// 	ans = flag1&&flag2;
//// 	return ans;
//// }
//void findAncestor(int tempRoot,int p1,int p2)
//{
//	
//		if (p1 == tempRoot)
//		{
//			printf("%d is an ancestor of %d.\n",inOrder[p1],inOrder[p2]);
//			return;
//		}
//		else if (p2 ==tempRoot)
//		{
//			printf("%d is an ancestor of %d.\n",inOrder[p2],inOrder[p1]);
//			return;
//		}
//		else if ((p1 -tempRoot)*(p2-tempRoot)<0)
//		{
//			printf("LCA of %d and %d is %d.\n",inOrder[p1],inOrder[p2],inOrder[tempRoot]);
//		}
//		else
//		{
//			if (p1<tempRoot && p2<tempRoot)
//			{
//				findAncestor(mytree[tempRoot][0],p1,p2);
//			}
//			else
//			{
//				findAncestor(mytree[tempRoot][1],p1,p2);
//			}
//		}
//
//}
//int LCAPreAndInOrder(int argc, char* argv[])
//{
//	
//	int T,N;cin>>T>>N;
//	
//	preOrder.resize(N+1);
//	inOrder.resize(N+1);
//	for (int i = 1; i <= N; ++i)
//	{
//		scanf("%d",&inOrder[i]);
//		pos[inOrder[i]] = i;
//	}
//	for (int i = 1; i <= N; ++i)
//	{
//		scanf("%d",&preOrder[i]);
//	}
//	
//	dfsCons(pos[preOrder[1]],1,N,1,N);
//	//Tparent[pos[preOrder[0]]] = pos[preOrder[0]];
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
//			findAncestor(parent,p1,p2);
//		}
//		
//	}
//	return 0;
//}
//
