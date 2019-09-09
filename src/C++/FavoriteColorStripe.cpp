#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;

int FavoriteCOlorStripe(int argc, char* argv[])
{
	int stripe[10001],dp[10001],pattern[201];
	int n,M,L;cin>>n;
	cin>>M;
	for (int i = 1; i <=M ; ++i)
	{
		int color;
		scanf("%d",&color);
		pattern[color] = i;
		
	}
	cin>>L;
	int cnt=0;
	for (int i = 0; i < L; ++i)
	{
		int color;
		scanf("%d",&color);
		if (pattern[color] > 0)
		{
			stripe[cnt]=pattern[color];
			cnt++;
		}
	}
	int maxn=0;
	for (int i = 0; i < cnt; ++i)
	{
		dp[i]=1;
		for (int j = 0; j < i; ++j)
		{
			if (stripe[i]>=stripe[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		maxn= max(maxn,dp[i]);
	}
	cout<<maxn<<endl;
	return 0;
}
