#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;


int EddingtonNumber()
{
	vector<int> Eddingtonnums;
	int N;
	cin>>N;
	for (int i = 0; i < N; ++i)
	{
		int temp;scanf("%d",&temp);
		Eddingtonnums.push_back(temp);
	}
	sort(Eddingtonnums.begin(),Eddingtonnums.end(),greater<int>());
	int maxn = Eddingtonnums[0];
	int left=0,right=Eddingtonnums.size()-1;
	int eddingNum=-1;
	//while (left<=right)
	//{
	//	int mid=(left+right)/2;
	//	if (mid+1 <=Eddingtonnums[mid])
	//	{
	//		eddingNum = mid+1;
	//		left = mid+1;
	//	}
	//	else
	//	{
	//		right = mid-1;
	//	}
	//}
	int i=0;
	while (i<N &&  Eddingtonnums[i]>i+1)
	{
		++i;
	}
	cout<<i<<endl;

	return 0;
}