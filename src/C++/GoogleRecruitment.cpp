#include <iostream>
#include <string>
using namespace  std;
bool isPrime(int n)
{
	if (n==1 || n==0 ) return  false;
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0) return false;
	}
	return  true;
}
int  GoogleRecruit(int argc, char* argv[])
{
	int N,M;
	string s;
	cin>>M>>N>>s;
	
	for (int i=0;i<=M-N;++i)
	{
		string temp_s =s.substr(i,N);
		int num= stoi(temp_s);
		if (isPrime(num))
		{
			cout<<temp_s;
			return 0;
		}
	}
	cout<<"404";
	

	return 0;
}
