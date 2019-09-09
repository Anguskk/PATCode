//#include <iostream>
//#include <set>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace  std;
//
//int fatherid[10001];
//bool isBirdExist[10001];
//int cntOfForest[10001];
//int find(int p)
//{
//	while (p !=fatherid[p])
//	{
//		p= fatherid[p];
//	}
//	return p;
//}
//void _Union(int i,int j)
//{
//	int p=find(i);
//	int q=find(j);
//	if ( p == q ) return;
//	if (cntOfForest[p]<cntOfForest[q])
//	{
//		fatherid[p] =  q;
//		cntOfForest [q] +=cntOfForest[p];
//		cntOfForest[p] = 0;
//		
//	}
//	else
//	{
//		fatherid[q] =  p;
//		cntOfForest [p] +=cntOfForest[q];
//		cntOfForest[q] = 0;
//	}
//}
//
//bool isPicturesConnected[10005];
//int BirdInforest(int argc, char* argv[])
//{
//	int n;cin>>n;
//	for (int i = 1; i < 10001; ++i)
//	{
//		fatherid[i] =  i;
//	}
//	for (int i = 1; i <= n; ++i)
//	{
//		int k;cin>>k;
//		int bird0;
//		scanf("%d",&bird0);
//		if (!isBirdExist[bird0])
//		{
//			isBirdExist[bird0] = true;
//			cntOfForest[bird0]=1;
//		}		
//		
//		for (int j = 1; j < k; ++j)
//		{
//			int bird1;
//			scanf("%d",&bird1);
//				if (!isBirdExist[bird1])
//			{
//				isBirdExist[bird1] = true;
//				cntOfForest[bird1]=1;
//			}
//			_Union(bird0,bird1);
//			
//		}
//	}
//	int cntbird=0;
//	for (int i=1; i<10001; ++i)
//	{
//		if (!isBirdExist[i])
//		{
//			cntbird =i-1;
//			break;
//		}
//	}
//	int cntFor=0;
//	for (int i = 1; i <= cntbird; ++i)
//	{
//		if (cntOfForest[i] !=0)
//		{
//			cntFor +=1;
//		}
//	}
//	printf("%d %d\n",cntFor,cntbird);
//	int query;cin>>query;
//	for (int i = 0; i < query; ++i)
//	{
//		int b1,b2;
//		cin>>b1>>b2;
//		int p1=find(b1);
//		int p2=find(b2);
//		if (p1 == p2)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}
