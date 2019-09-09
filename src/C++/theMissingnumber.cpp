#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace  std;

int theMissingNum(int argc, char* argv[])
{
	vector<int> nums(100055);
	unordered_map<int,int>  hashmap;
	int n;
	cin>>n;
	/*
	for (int i = 0; i < n; ++i)
	{
		int temp;
		scanf("%d",&temp);
		if (temp>0)
		{
			nums[temp] +=1;
		}
	}*/
	//for (int i = 1; ; ++i)
	//{
	//	if (nums[i] == 0)
	//	{
	//		cout<<i;
	//		break;
	//	}
	//}
	for (int i = 0; i < n; ++i)
	{
		int temp;
		scanf("%d",&temp);
		if (temp>0)
		{
			hashmap[temp] += 1;	
		}
		
	}
	for (int i = 1; ; ++i)
	{
		if (hashmap.find(i) == hashmap.end())
		{
			cout<<i;
			break;
		}
	}
	
	
	cout<<hashmap.bucket(2)<<endl;
	
    
	
	

	return 0;
}
	