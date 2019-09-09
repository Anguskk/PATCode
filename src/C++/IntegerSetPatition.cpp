#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int IntegerSetPatition(int argc, char* argv[])
{
	vector<int> nums;
	int N;cin>>N;
	nums.resize(N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&nums[i]);
	}
	sort(nums.begin(),nums.end());
	
		int sum1=0,sum2=0;
		int i = 0;
		for (; i < N/2; ++i)
		{
			sum1 += nums[i];
		}
		for (; i < nums.size(); ++i)
		{
			sum2 += nums[i];
		}

	
	if (N%2 ==0) printf("0 %d\n",sum2-sum1);

	else 
		printf("1 %d",sum2-sum1);
	
	return 0;
}
