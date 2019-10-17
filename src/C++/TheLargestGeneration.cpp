#include <iostream>
#include <vector>
using namespace  std;
struct __People1__
{
	int id,gen;
	vector<int> childs;
};
__People1__ p[105];
int cntGen[101];
void pedigreeDFS(int cur,int gen)
{
	p[cur].gen = gen;
	cntGen[gen] +=1;
	if (!p[cur].childs.empty())
	{
		__People1__ tp=p[cur];
		for (int i = 0; i < tp.childs.size(); ++i)
		{
			pedigreeDFS(tp.childs[i],gen+1);
		}
	}
}
int TheLargestGeneration(int argc, char* argv[])
{
	int n,line;cin>>n>>line;
	for (int i = 0; i < line; ++i)
	{
		int parent,k;cin>>parent>>k;
		p[parent].id = parent;
		for (int i = 0; i < k; ++i)
		{
			int child;
			scanf("%d",&child);
			p[parent].childs.push_back(child);

		}
	}
	pedigreeDFS(1,1);
	int max=0,level=0;
	for (int i = 1; cntGen[i]>0; ++i)
	{
		if (max < cntGen[i])
		{
			max = cntGen[i];
			level = i;
		}
	}
	printf("%d %d\n",max, level);
	return 0;
}
