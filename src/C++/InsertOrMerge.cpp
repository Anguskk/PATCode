#include <iostream>
#include <algorithm>
using namespace  std;

int InsertOrMerge(int argc, char* argv[])
{
	int a[100];
	int b[100];
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&b[i]);
	}
	int i1,i2;
	for ( i1 = 0; i1 < n-1  &&b[i1]<=b[i1+1]; ++i1);
	for ( i2 = i1+1; i2 <n && a[i2]==b[i2]; ++i2);
	if (i2==n)
	{
		cout<<"Insertion Sort"<<endl;
		sort(a,a+i1+2);
	}
	else
	{
		cout<<"Merge Sort"<<endl;
		bool flag=false;
		int k=1;
		while (!flag)
		{
			int i;
			for ( i = 0; i < n; ++i)
			{
				if (a[i]!=b[i])
				{
					break;
				}
			}
			if (i == n)
			{
				flag=true;
			}
			k = k*2;
			for (int j = 0; j < n/k; ++j)
			{
				sort(a+j*k,a+(j+1)*k);
			}
			sort(a+(n/k)*k,a+n);

			
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (i!=0) printf(" ");
		printf("%d",a[i]);
	}
	
	return 0;
}
