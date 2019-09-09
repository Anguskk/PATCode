#include <iostream>
using namespace  std;
long long gcd(long long a,long long b)
{
	return b==0? abs(a):gcd(b,(a%b));
}
int  rationalsum(int argc, char* argv[])
{	
	int n;
	long long  a,b,gcdval;
	long long suma=0,sumb=1;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld/%lld",&a,&b);
		gcdval = gcd(a,b);
		a = a/gcdval;
		b= b/gcdval;
		suma = a*sumb+b*suma;
	    sumb = b*sumb;
		gcdval =gcd(suma,sumb);
		suma = suma /gcdval;
		sumb = sumb /gcdval;
	}
	long long integer = suma/sumb;
	long long numerator= suma-integer*sumb;
	long long denumerator = sumb;
	if (integer == 0)
	{
		if (numerator==0)
		{
			printf("0\n");	
		}
		else
		{
			printf("%lld/%lld",numerator,denumerator);
		}
	}
	else
	{
		if (numerator==0)
		{
			printf("%lld",integer);
		}
		else
		{
			printf("%lld %lld/%lld",integer,numerator,denumerator);
		}
	}
	
	
	return 0;
}
