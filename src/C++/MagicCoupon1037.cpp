#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;
vector<int> v1plus;
vector<int> v1neg;
vector<int> v2plus;
vector<int> v2neg;
int MagicCoupon(int argc, char* argv[])
{
	long long int sum=0;
	int N1,N2;
	cin>>N1;
	int temp;
	for (int i = 0; i < N1; ++i)
	{
		scanf("%d",&temp);
		if (temp>0)
		{
			v1plus.push_back(temp);
		}
		else
		{
			v1neg.push_back(-1*temp);
		}
	}
	cin>>N2;
	for (int i = 0; i < N2; ++i)
	{
		scanf("%d",&temp);
		if (temp>0)
		{
			v2plus.push_back(temp);
		}
		else
		{
			v2neg.push_back(-1*temp);
		}
	}
	sort(v1plus.begin(),v1plus.end(),greater<int>());
	sort(v2plus.begin(),v2plus.end(),greater<int>());
	sort(v1neg.begin(),v1neg.end(),greater<int>());
	sort(v2neg.begin(),v2neg.end(),greater<int>());
	int cnt1=min(v1plus.size(),v2plus.size());
	int cnt2=min(v1neg.size(),v2neg.size());
	for (int i = 0; i < cnt1; ++i)
	{
		sum +=v1plus[i]*v2plus[i];
	}
	for (int i = 0; i < cnt2; ++i)
	{
		sum +=v1neg[i]*v2neg[i];
	}
	cout<<sum<<endl;
 	return 0;
}
//  [lowerbound,val,upperbound)
//int  a[]={-1,-2,2,4,0,0,0,5,7,2,0};
//	vN.assign(a,a+sizeof(a)/sizeof(int));
//	sort(vN.begin(),vN.end());
//	auto it1=lower_bound(vN.begin(),vN.end(),6);
//	auto it2=upper_bound(vN.begin(),vN.end(),6);