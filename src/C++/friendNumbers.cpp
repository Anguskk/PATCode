#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace  std;
int calcuDightsSum(int num)
{
	int sum=0;
	while (num>0)
	{
		sum += num%10;
		num =  num/10;
	}
	return sum;
}
int  friendNumber(int argc, char* argv[])
{
	set<int> numSet;
	
	int N;
	cin>>N;
	for (int i = 0; i < N; ++i)
	{
		int temp;
		scanf("%d",&temp);
		numSet.insert(calcuDightsSum(temp));

	}
	vector<int> numVec(numSet.begin(),numSet.end());
	sort(numVec.begin(),numVec.end());
	int ii=0;
	cout<<numVec.size()<<endl;
	for (int i = 0; i < numVec.size(); ++i)
	{
		printf("%d",numVec[i]);
		if (i!=numVec.size()-1)
		{
			printf(" ");
		}
	}
	return 0;
}
