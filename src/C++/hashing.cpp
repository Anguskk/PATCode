#include <iostream>
#include <cstdlib>
using namespace std;
//bool flags[10001];
//int hash[10001];
//bool isprime(int n)
//{
//	if (n==1 || n==0 )
//	{
//		return false;
//	}
//	for (int i = 2; i*i <= n; ++i)
//	{
//		if (n%i ==0)
//		{
//			return false;
//		}
//	}
//	return  true;
//}
//int findBiggerPrime(int n)
//{
//	for (int i = n+1; ; ++i)
//	{
//		if (isprime(i))
//		{
//			return i;
//		}
//	}
//}
//int quadratic_insert(int num,int size)
//{	
//	for (int i = 0; i <size ; ++i)
//	{
//		int index= (num+i*i)%size;
//		if (flags[index] == false)
//		{
//			flags[index] = true;
//			return index;
//		}
//
//	}
//	return -1;
//}
//int  hashing(int argc, char* argv[])
//{
//	int size,n;
//	int number;
//	std::cin>>size>>n;
//	if (false ==isprime(size))
//	{
//		size =findBiggerPrime(size);
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d",&number);
//		int index = quadratic_insert(number,size);
//		if (index == -1)
//		{
//			printf("-");
//		}
//		else
//		{
//			cout<<index;
//		}
//		if (i!=n-1)
//		{
//		 printf(" ");	
//		}
//	}
//	return 0;
//}
