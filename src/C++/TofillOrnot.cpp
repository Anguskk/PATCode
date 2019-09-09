#include <iostream>
#include <vector>
using namespace  std;
struct gastation
{
	int dist;
	float price;
};
vector<gastation> vGastion;
int main(int argc, char* argv[])
{
	int capacity,distance,unitDis,N;
	cin>>capacity>>distance>>unitDis>>N;
	for (int i = 0; i < N; ++i)
	{
		gastation ts;
		float p;int d;
		scanf("%f %d",&ts.price,&ts.dist);
		vGastion.push_back(ts);
	}

	return 0;
}
