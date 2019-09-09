#include <iostream>
#include <map>
#include <set>
using namespace  std;
#include <string>
bool isOK[256]={false};
int StuckedBoard(int argc, char* argv[])
{
	map<char,bool> lookup;
	int n;cin>>n;getchar();
	string s;cin>>s;
	int cnt=1;	
	char pre = s[0];    
	for (int i = 1; i < s.length(); ++i)
	{
		if (s[i] ==pre)
		{
			cnt +=1;
		}
		else
		{
			if (s[i] != pre)
			{
				if (cnt % n ==0  && isOK[pre] ==false)
				{
					lookup[pre] = true;
				}
				else
				{
					isOK[pre] = true;
					lookup[pre]= false;
				}
				cnt=1;				
			}		
		}
		pre = s[i];
	}
	if (cnt % n ==0  && isOK[pre] ==false)
	{
		lookup[pre] = true;
	}
	else
	{
		isOK[pre] = true;
		lookup[pre]= false;
	}
	for (int i = 0; i < s.length(); ++i)
	{
		if (isOK[s[i]] == true)
		{
			lookup[s[i]]= false;
		}
	}
	set<char> isRepeat;
	for (int i = 0; i < s.length(); ++i)
	{
		if (lookup[s[i]] )
		{
			auto it=isRepeat.find(s[i]);
			if (it == isRepeat.end())
			{
				printf("%c",s[i]);
				isRepeat.insert(s[i]);
			}
		}
	}
	cout<<endl;
	for (int i = 0; i <s.length(); ++i)
	{
		printf("%c",s[i]);
		if (lookup[s[i]] == true)
		{			
			i = i+n-1;
		}
		
	}
	return 0;
}
