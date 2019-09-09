#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace  std;
//后缀数组法  两个Case没过
vector<string>   vSuffix;
int LongestSymmetricString(int argc, char* argv[])
{
	string s;
	getline(cin,s);
	if (s.length() ==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	
	string s1=s;
	reverse(s1.begin(),s1.end());
	//s.append(s1);
	for (int i = 0; i < s.length(); ++i)
	{
		vSuffix.push_back(s.substr(i));
	}
	for (int i = 0; i < s.length(); ++i)
	{
		vSuffix.push_back(s1.substr(i));
	}
	sort(vSuffix.begin(),vSuffix.end());
	int maxn=0;
	for (int i = 1; i < vSuffix.size(); ++i)
	{
		int cnt=0;
		string s1=vSuffix[i-1];
		string s2=vSuffix[i];
		int len=min(s1.length(),s2.length());
		for (int j = 0; j < len; ++j)
		{
			if (s1[j]!=s2[j])
			{
				break;
			}
			else { cnt++; }
		}
		if (maxn < cnt)
		{
			maxn = cnt;
		}
	}
	cout<<maxn<<endl;
	return 0;
}
