#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace  std;
inline long long gcd_(long long a, long long b)
{	
	long long maxn=max(a,b);
	long long minn=min(a,b);
	return  maxn%minn==0?  minn:gcd_(minn,maxn%minn);
}
void func_(long long p1, long long p2)
{
	if (p1*p2 == 0)
	{
		if (p2==0)
		{
			printf("Inf");
		}
		else
		{
			printf("0");
		}
		return;
	}
	bool flag= ((p1<0&&p2>0)||(p2<0&&p1>0));
	p1=abs(p1);p2=abs(p2);
	long long gcd=gcd_(p1,p2);
	if (gcd>1)
	{
		p1 = p1 / gcd;
		p2 = p2/gcd;
	}
	long long k=p1/p2;
	long long remain=p1-k*p2;
	if (flag)
	{
		printf("(-");
	}
	if (k == 0)
	{
		printf("%lld/%lld",p1,p2);
	}
	else
	{
		if (remain==0)
		{
			printf("%lld",k);
		}
		else
		{
			printf("%lld %lld/%lld",k,remain,p2);
		}
		
	}
	if (flag)
	{
		printf(")");
	}	

}
int RationalArithmetic(int argc, char* argv[])
{
	long long a1,b1,a2,b2;
	long long gcd1,gcd2;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);	
	func_(a1,b1);printf(" + ");func_(a2,b2);printf(" = ");
	func_(a1*b2+b1*a2,b1*b2);printf("\n");
	func_(a1,b1);printf(" - ");func_(a2,b2);printf(" = ");func_(a1*b2-b1*a2,b1*b2);printf("\n");
	func_(a1,b1);printf(" * ");func_(a2,b2);printf(" = ");func_(a1*a2,b1*b2);printf("\n");
	func_(a1,b1);printf(" / ");func_(a2,b2);printf(" = ");
	func_(a1*b2,b1*a2);printf("\n");
	return 0;
}
