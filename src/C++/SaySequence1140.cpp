#include <iostream>
using namespace  std;
#include <string>
#include <string>
string Looksay(string s)
{
	string  res="";
	int cnt=1;
	if (s.length()==1)
	{
		res=s+'1';
		return res;
	}
	for (int i = 1; i < s.length(); ++i)
	{
		if (s[i]!=s[i-1])
		{
			res += s[i-1];
			res += to_string((_Longlong)cnt);
			cnt=1;
		}
		else { cnt++; }
	}
	
	res += s[s.length()-1];
	res += to_string((_Longlong)cnt);
	return  res;
}
int SaySequence(int argc, char* argv[])
{
	char D;
	int N;
	cin>>D>>N;
	string s1="";
	s1 += D;
	for (int i = 2; i <=N; ++i)
	{
		s1 =Looksay(s1);
		//cout<<s1<<endl;
	}
	cout<<s1<<endl;
	return 0;
}
