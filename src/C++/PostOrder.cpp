#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace  std;
//vector<int> preOrder,inOrder;
//
//
////Ç°ÐòºÍÖÐÐò
//void  dfsConstruct(bool &flag,int Inleft,int Inright,int Preleft,int PreRight)
//{
//	if (flag == true || Inleft>Inright)
//	{
//		return;
//	}
//	int pivot=preOrder[Preleft];
//	int i=Inleft;
//	while (inOrder[i] != pivot)
//	{
//		i++;
//	}
//		if (inOrder[i] == preOrder[Preleft])
//		{
//			
//			dfsConstruct(flag,Inleft,i-1,Preleft+1,Preleft+(i-Inleft));
//			dfsConstruct(flag,i+1,Inright,Preleft+(i+1-Inleft),PreRight);
//			if (false == flag )
//			{
//				flag = true;
//				cout<<inOrder[Inleft];
//			}
//		}
//	
//}
//int PostOrder(int argc, char* argv[])
//{
//	int n;cin>>n;
//	preOrder.resize(n+1);inOrder.resize(n+1);
//	for (int i = 1; i <= n; ++i)
//	{
//		int temp;scanf("%d",&temp);
//		preOrder[i]=temp;
//	}
//	for (int i = 1; i <=n; ++i)
//	{
//		int temp;scanf("%d",&temp);
//		inOrder[i]=temp;
//	}
//	int root;
//	bool falg= false;
//	dfsConstruct(falg,1,n,1,n);	
//	
//	return 0;
//}
