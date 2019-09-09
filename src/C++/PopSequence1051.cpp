#include <iostream>
#include <queue>
#include <stack>
using namespace  std;


int popSequence(int argc, char* argv[])
{
	int  nums[1001];
	int M,N,K;
	cin>>M>>N>>K;
	
	for (int i = 0; i < K; ++i)
	{
		queue<int> q;
		stack<int> s;
		bool flag= true;
		for (int i_1 =1; i_1 <= N; ++i_1)
		{
			q.push(i_1);
		}
		for (int j = 0; j < N; ++j)
		{
			int temp;
			scanf("%d",&nums[j]);			
		}
	
		for (int k_i = 0; k_i < N;)
		{
			if (s.empty())
			{
				int ele = q.front();
				s.push(ele);
				q.pop();
			}
				if (s.top()<nums[k_i] && s.size()<M)
				{
					int ele = q.front();
					s.push(ele);
					q.pop();
					continue;
				}
				if (s.top() == nums[k_i])				
				{
					s.pop();
					++k_i;
					continue;
				}				
				if ((s.size() == M && s.top()!=nums[k_i]) ||s.top()>nums[k_i])
				{
					flag = false;
					cout<<"NO"<<endl;
					break;
				}
			
		}
		if (flag)
		{
			cout<<"YES"<<endl;	
		}
		
	}
	
	return 0;
}
