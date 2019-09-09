#include <iostream>
using namespace  std;
int exponent[100001];

int SumofnumberSegment(int argc, char* argv[])
{
	int N;
	cin>>N;

	double sum=0.0;
	double temp;
	for (int i = 1; i <= N; ++i)
	{
		scanf("%lf",&temp);
		sum += temp*i*(N-(i-1));
	}
	printf("%.2lf\n",sum);
	return 0;
}
