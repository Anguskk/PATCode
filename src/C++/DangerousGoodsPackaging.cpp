#include <iostream>
#include <unordered_map>
using namespace  std;
//unordered_map<pair<int,int>,bool>  lookup;

int hashAddress(int &n1,int &n2)
{
	int ans=0;
	return (n1*n2)%100001;
}
int DangerousGoodsPackage(int argc, char* argv[])
{
	bool isCompatable[100001];
	bool isCollision[1000001];
	int N,K;cin>>N>>K;
	for (int i = 0; i < N; ++i)
	{
		int n1,n2;
		scanf("%d %d",&n1,&n2);
		//lookup[make_pair(n1,n2)]=true;
		isCompatable[n1]=true;
		isCompatable[n2]=true;
		isCollision[hashAddress(n1,n2)]=true;
	}
	for (int i = 0; i < K; ++i)
	{
		int k_i;cin>>k_i;
		vector<int> numVec;
		int temp;
		for (int j = 0; j < k_i; ++j)
		{
			scanf("%d",&temp);
			if (isCompatable[temp] == true)
			{
				numVec.push_back(temp);
			}
		}
		bool flag1=false;
		for (int i2 = 1; i2 < numVec.size(); ++i2)
		{
			for (int j2 = 0; j2 < i2; ++j2)
			{
				if (isCollision[hashAddress(numVec[i2],numVec[j2])] == true)
				{
					flag1= true;
					break;
				}
			}
			if (flag1)
			{
				break;
			}
		}
		if (flag1)
		{
			cout<<"No"<<endl;
		}
		else { cout<<"Yes"<<endl; }

	}
	return 0;
}
