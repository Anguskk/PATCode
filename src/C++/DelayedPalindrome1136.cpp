#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace  std;
//自己定义字符串加法
bool isPalindrome(string s)
{
	for (int i = 0,j=s.length()-1; i <j ; ++i,--j)
	{
		if (s[i]!=s[j])
		{
			return false;
		}
	}
	return true;
}

int DelayedPalindrome(int argc, char* argv[])
{
	string s="";
	getline(cin,s);
	for (int i = 1; i <=10 ; ++i)
	{
		if (isPalindrome(s))
		{
			printf("%s is a palindromic number.\n",s.c_str());
			return 0;
		}
		string sReverse=s;
		reverse(sReverse.begin(),sReverse.end());
		
		long long int sum=stoi(s)+stoi(sReverse);
		string sSum=to_string(sum);
		
		printf("%s + %s = %s\n",s.c_str(),sReverse.c_str(),sSum.c_str());
		s = sSum;
	}
	cout<<"Not found in 10 iterations."<<endl;

	return 0;
}
