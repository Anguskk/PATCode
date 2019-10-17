#include <iostream>
#include <vector>
using namespace  std;
vector<int> pos;
vector<int> q_pos;
int SortWithSwap(int argc, char* argv[])
{	
	int N;cin>>N;
	pos.resize(N);
	q_pos.resize(N);
	int cnt=0,sum=0;
	for (int i = 0; i < N; ++i)
	{
		int num;
		scanf("%d",&num);
		pos[i]= num;
		q_pos[num] = i;
		if (pos[i] != i)
		{
			cnt +=1;	
		}
	}
	int currentEnd=N-1;
	while (cnt >0)
	{
		while (q_pos[0] != 0)
		{
			int index0=q_pos[0],indexi=q_pos[q_pos[0]];
			swap(pos[index0],pos[indexi]);
			q_pos[0]= indexi;q_pos[index0] = index0;
			cnt -=1;
			sum +=1;
		}
		bool flag=false;
		if (q_pos[0] == 0)
		{
			for (int i = currentEnd; i>0 ; --i)
			{
				if (pos[i] != i)
				{
					int temp=pos[i];
					swap(pos[0],pos[i]);
					q_pos[0] = i;
					q_pos[temp] =  0;
					currentEnd = i;
					sum +=1;
					flag = true;
					break;
				}
			}
			if (!flag )
			{
				
				break;
			}
		}
		
	}
	printf("%d\n",sum);
	return 0;
}
