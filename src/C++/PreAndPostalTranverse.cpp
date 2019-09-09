// #include <iostream>
// #include <vector>
// using namespace  std;
// vector<int> postOrder,preOrder;
// int mytree[35][2];
// bool isCheckded[35];
// bool isUnique;
// void  dfsConstruct(int root,int preleft,int preRight,int Postleft,int PostRight)
// {
// 	if (preRight<=preleft || Postleft>=PostRight)
// 	{
// 		return;
// 	}
// 	//index = PostRight;
// 	for (int i = preleft,j=PostRight; i <= preRight,j>=Postleft; ++i,--j)
// 	{
// 		if (isCheckded[preOrder[i]])
// 		{
// 			++i;
// 			// dfsConstruct(mytree[index][0],Inleft,i-1,Postleft,Postleft+(i-1-Inleft));
// 			// dfsConstruct(mytree[index][1],i+1,Inright,Postleft+i-Inleft,PostRight-1);
// 		}
// 		else
// 		{
// 			
// 		}
// 		if (isCheckded[postOrder[j]])
// 		{
// 			j--;
// 		}
// 		if (preOrder[i] == postOrder[j])
// 		{
// 			isUnique = false;
// 		}
// 		else
// 		{
// 			int k1 = i+1;
// 			for (; k1 <= preRight; ++k1)
// 			{
// 				if (preOrder[k1] == postOrder[j])
// 				{
//
// 					break;
// 				}
// 			}
// 			int k2 = Postleft;
// 			for (; k2 <= PostRight; ++k2)
// 			{
// 				if (preOrder[i] == postOrder[k2])
// 				{
//
// 					break;
// 				}
// 			}
// 			mytree[root][0] =preOrder[i];
// 			isCheckded[preOrder[i]] = true;
// 			dfsConstruct(preOrder[i],preleft+1,k1-1,Postleft,k2);
// 			mytree[root][1] =postOrder[j];
// 			isCheckded[postOrder[j]] = true;
// 			dfsConstruct(postOrder[j],k1,preRight,k2+1,PostRight-1);
// 		}
// 	}
// }
// int main(int argc, char* argv[])
// {
// 	int N;cin>>N;
// 	
// 	preOrder.resize(N+1);
// 	postOrder.resize(N+1);
// 	for (int i = 1; i <= N; ++i)
// 	{
// 		scanf("%d",&preOrder[i]);
// 	}
// 	// for (int i = 1; i <= N; ++i)
// 	{
// 		scanf("%d",&postOrder[i]);
// 		
// 	}
// 	isCheckded[preOrder[1]] = true;
// 	dfsConstruct(preOrder[1],2,N,1,N-1);
//
//
// }
