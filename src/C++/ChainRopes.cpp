#include <iostream>	
#include <vector>
#include <algorithm>
using namespace  std;
vector<int> vSeg;
int ChainRope(int argc, char* argv[])
{
	int n;cin>>n;
	vSeg.resize(n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&vSeg[i]);
	}
	sort(vSeg.begin(),vSeg.end());
	double sum=vSeg[0];
	for (int i = 1; i < n; ++i)
	{
		sum = (sum+vSeg[i])/2;
	}
	
	printf("%d\n" ,(int)sum);
	
	return 0;
}
