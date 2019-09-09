#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace  std;
bool cmp7777(string &a,string &b)
{
	return a+b<b+a;
}

int RecoverSmallestNumber(int argc, char* argv[])
{
	vector<string> vstr;
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;		
		vstr.push_back(s);
	}
	sort(vstr.begin(),vstr.end(),cmp7777);
	string ans="";
	for (int i = 0; i < vstr.size(); ++i)
	{
		ans += vstr[i];
	}
	int ii=0;
	for ( ; ii < ans.length(); )
	{
		if (ans[ii]=='0')
		{
			ii++;
		}
		else { break; }
	}
	if (ii== ans.length())
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<ans.substr(ii)<<endl;
	}
	
	return 0;
}
