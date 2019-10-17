#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
struct bankService
{
	int h,m,s,proc;
	double tCome;
	bool operator< (const bankService &b1) const
	{
		return this->tCome<b1.tCome;
	}
};
vector<bankService>  vB;
int QueueAtBank(int argc, char* argv[])
{
	double waitTime=0.0;
	int N,K;cin>>N>>K;
	//vB.resize(N);
	int totalP = N;
	for (int i = 0; i <N; ++i)
	{
		//int h,m,s,p;
		bankService b1;
		scanf("%d:%d:%d %d",&b1.h,&b1.m,&b1.s,&b1.proc);		
		if (b1.h>=17 && (b1.s>0|b1.m>0))
		{
			totalP -=1;
			continue;
		}
		b1.tCome=60*(b1.h-8)+b1.m+1.0*b1.s/60;
		if (b1.tCome<0)
		{
			waitTime += abs(b1.tCome);
		}
		vB.push_back(b1);
	}
	sort(vB.begin(),vB.end());
	double startTime=8.0*60,endTime=17.0*60;
	priority_queue<double,vector<double>,greater<double>> pq;
	auto it=vB.begin();
	while (pq.size()<K && it!=vB.end())
	{
		if (it->proc<60)
		{
			pq.push(it->proc);
		}
		else
		{
			pq.push(60);
		}
		++it;
	}
	while (!pq.empty())
	{
		double tempT=pq.top();
		pq.pop();
		if (it!=vB.end())
		{
			if (tempT>it->tCome)
			{
				waitTime += tempT-it->tCome;
				if (it->proc<60)
				{
					pq.push(tempT+it->proc);
				}
				else
				{
					pq.push(tempT+60);
				}
			}
			else
			{
				if (it->proc<60)
				{
					pq.push(it->tCome+it->proc);
				}
				else
				{
					pq.push(it->tCome+60);
				}
			}
			
			++it;
		}
		
	}
	printf("%.1lf\n",waitTime/vB.size());
	return 0;
}
