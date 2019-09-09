#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;
bool flags[10001];
//int hashs[10001];
//int cntt=0;
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
//			hashs[index] = num;
//			flags[index] = true;
//			return index;
//		}
//
//	}
//	return -1;
//}
//void quadratic_search(int num,int size)
//{
//	for (int i = 0; i <= size; ++i)
//	{
//		cntt++;
//		int index = (num+i*i)%size;
//		if (hashs[index] == num  || flags[index] ==false)
//		{
//			return;
//		}
//	}
//}
//queue<int> queueInsert;
//int  rehash(int argc, char* argv[])
//{
//	int size,M,N;
//	cin>>size>>M>>N;
//	if (!isprime(size))
//	{
//		size = findBiggerPrime(size);
//	}
//	for (int i = 0; i < M; ++i)
//	{
//		int temp;
//		scanf("%d",&temp);
//		if (quadratic_insert(temp,size) == -1)
//		{
//			cout<<temp<<" cannot be inserted.\n"<<endl;
//		}		
//	}	
//	//int cntt=0;
//	for (int i = 0; i < N; ++i)
//	{
//		int qtemp;
//		scanf("%d",&qtemp);
//		quadratic_search(qtemp,size);
//		
//	}
//	printf("%.1lf\n",cntt*1.0/N);
//	return 0;
//}
