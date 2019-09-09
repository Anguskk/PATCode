#include <iostream>
#include <vector>
using namespace  std;

//Çø¶ÎºÍ
int shoppIngMars(int argc, char* argv[])
{
	vector<int> numbers;
	vector<pair<int,int>> ans;
	int n,M;
	cin>>n>>M;
	numbers.resize(n+1);
	for (int i_1 = 1; i_1 <= n; ++i_1)
	{
		scanf("%d",&numbers[i_1]);
	}
	int sum=numbers[1],maxSum=2147483647;
	bool flag=false;
	int i=1,j=2;
	for ( i = 1; i <= n;)
	{
		//sum +=numbers[i];
		if (sum == M)
		{
			ans.push_back(make_pair(i,j-1));
			sum = sum-numbers[i];
			i = i+1;
			flag=true;
		}
		else if (sum>M)
		{
			if (sum< maxSum && !flag)
			{
				maxSum = sum;
				ans.clear();
				ans.push_back(make_pair(i,j-1));
			}
			else if (sum == maxSum && !flag)
			{
				ans.push_back(make_pair(i,j-1));
			}
			sum = sum-numbers[i];
			i = i+1;			
		}		
		else if (sum<M)
		{		
			if (j>n)
			{
				break;
			}
			for ( ; sum < M && j<=n; )
			{
				sum +=numbers[j];
				++j;
			}
			
		}
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		printf("%d-%d\n",ans[i].first,ans[i].second);
	}
	return 0;
}
