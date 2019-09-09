#include <iostream>
#include <algorithm>
using namespace std;
int nums[100001];
int dp[100001];
int PerfectSequence(int argc, char* argv[])
{
	int N,p;cin>>N>>p;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&nums[i]);
	}
	
	sort(nums,nums+N);
	//if (nums[N-1]/nums[0] <=p)
	//{
	//	cout<<N<<endl;
	//	return 0;
	//}
	if (N==0 || N==1)
	{
		cout<<N<<endl;
		return 0;
	}
	int maxn=0;
	for (int i = 0; i < N; ++i)
	{
		auto it=upper_bound(nums+i,nums+N,p*nums[i]);
		int interval=it-begin(nums)-i;
		maxn=max(maxn,interval);
	}

	cout<<maxn<<endl;
	return 0;
}
//dp  n^2¸´ÔÓ¶È³¬Ê±
//for (int i = 1; i < N; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (nums[i]/nums[j] <=p)
//			{
//				dp[i]=i-j+1;
//				break;
//			}
//		}
//		if (maxn<dp[i])
//		{
//			maxn= dp[i];
//		}
//	}
	