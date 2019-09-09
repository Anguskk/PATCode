#include <iostream>
#include <string>
using namespace  std;

int cutInteger(int argc, char* argv[])
{
	int n;
	cin>>n;
	string s;
	double epsion=0.00001;
	for (int i = 0; i < n; ++i)
	{
		
		cin>>s;
		int len = s.length();
		long long z=stoll(s);
		int pre = stoi(s.substr(0,len/2));
		int post = stoi(s.substr(len/2));
		long long mul=pre*post;
		if (mul==0)
		{
			cout<<"No"<<endl;
		}
		else 
		if (z%mul==0 )
		{
			cout<<"Yes"<<endl;
		}
		else { cout<<"No"<<endl; }
	}

	return 0;
}
