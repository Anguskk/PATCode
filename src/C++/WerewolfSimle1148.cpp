#include  <iostream>
#include <vector>
using namespace  std;
#include <cstdlib>
bool flag[101];
vector<int> remarks;
int Werewolfsimple(int argc, char* argv[])
{
	int N;cin>>N;
	remarks.resize(N+1);
	for (int i_i = 1; i_i <= N; ++i_i)
	{
		scanf("%d",&remarks[i_i]);
	}
	for (int i = 1; i <= N; ++i)
	{
		for (int j = i+1; j <=N; ++j)
		{
			memset(flag,true,sizeof(flag)/sizeof(bool));
			flag[i]=false;flag[j]=false;
			bool isliar1= flag[abs(remarks[i])] != (remarks[i]>0);
			bool isliar2= flag[abs(remarks[j])] != (remarks[j]>0);
			if (isliar1 != isliar2)
			{
				int cnt=0;
				for (int k = 1; k <= N; ++k)
				{
					if (flag[abs(remarks[k])] != (remarks[k]>0))
					{
						cnt +=1;
					}
				}
				if (cnt==2)
				{
					cout<<i<<" "<<j<<endl;
					return 0;
				}
			}
			
		}	
	}
	cout<<"No Solution"<<endl;

	return 0;
}
