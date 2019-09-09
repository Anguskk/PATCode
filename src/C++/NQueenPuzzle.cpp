#include <iostream>
#include <vector>
using namespace std;

vector<int> queens;
int Queenquiz()
{
	int N;cin>>N;
	for (int i = 0; i < N; ++i)
	{
		int num;
		scanf("%d",&num);
		queens.resize(num+1);
		bool flag=true;
		for (int j = 1; j <= num; ++j)
		{
			int temp;
			scanf("%d",&temp);
			queens[j] =temp;
		}
		for (int i = 2; i <= num; ++i)
		{
			for (int j = 1; j < i; ++j)
			{
				if (queens[i]==queens[j] || abs(queens[i]-queens[j])== i-j)
				{
					flag = false;
					break;
				}
			}
			if (flag == false)
			{
				break;
			}
		}
		if (flag == true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}