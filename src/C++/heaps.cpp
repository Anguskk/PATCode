#include <iostream>
#include <vector>
#include <queue>
using namespace  std;
//
//
//void postOrderTranverseByIndex(int parent,queue<int>  &queInt)
//{
//	/*if (parent*2+1<vecInt.size())
//	{
//		postOrderTranverseByIndex(parent*2+1,queInt);
//	}
//	if (parent*2+2<vecInt.size())
//	{
//		postOrderTranverseByIndex(parent*2+2,queInt);
//	}
//	queInt.push(vecInt[parent]);*/
//}
//
//int heaps(int argc, char* argv[])
//{
//	vector<int> vecInt;
//	int m,n;
//	cin>>m>>n;
//	for (int i = 0; i < m; ++i)
//	{
//		
//		vecInt.clear();
//		
//		for (int j = 0; j < n; ++j)
//		{
//			int temp;
//			scanf("%d",&temp);
//			vecInt.push_back(temp);
//		}
//		bool comp = vecInt[0]>=vecInt[1];
//		bool flag =true;
//		for (int i = 0; i<n/2; ++i)
//		{ 
//			if (comp!=vecInt[i]>=vecInt[2*i+1] )
//			{
//				flag =false;
//				break;
//			}
//			if (2*i+2<vecInt.size())
//			{
//				if (comp!=vecInt[i]>=vecInt[2*i+2] )
//				{
//					flag =false;
//					break;
//				}
//			}
//		}
//		if (false ==flag)
//		{
//			cout<<"Not Heap"<<endl;
//		}
//		else if (comp == true)
//		{
//			cout<<"Max Heap"<<endl;
//		}
//		else { cout<<"Min Heap"<<endl; }
//		queue<int> queInt;
//		postOrderTranverseByIndex(0,queInt);
//		while (!queInt.empty())
//		{
//			cout<<queInt.front();
//			queInt.pop();
//			if (!queInt.empty())
//			{
//				printf(" ");
//			}
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}
