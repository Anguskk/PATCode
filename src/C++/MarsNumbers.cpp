#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <map>
#include <vector>
#include <random>
#include <ctype.h>
#include <unordered_map>
using namespace  std;
char *shiwei[13] ={"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
char *gewei[13] ={"tret","jan","feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
int marToEarth(string s)
{
		if (s.length() >4)
		{
			int ii;
			for ( ii = 0; ii < s.length(); ++ii)
			{
				if (' '==s[ii])
				{
					break;
				}
			}
			string shi=s.substr(0,ii);
			string ge = s.substr(ii+1);
		int i;
		for (i=0; i < 13; ++i)
		{
			if (strcmp(shi.c_str(),shiwei[i]) ==0  )
			{
				break;
			}
		}
		int j;
		for (j=0; j< 13; ++j)
		{
			if (strcmp(ge.c_str(),gewei[j]) ==0 )
			{
				break;
			}
		}
		return i*13+j;
		}
	if (s.length()<=4)
	{
		int i;
		for (i=0; i < 13; ++i)
		{
			if (strcmp(s.c_str(),shiwei[i]) ==0 )
			{
				break;
			}
		}
		if (i==13)
		{
			int j;
			for (j=0; j< 13; ++j)
			{
				if (strcmp(s.c_str(),gewei[j]) ==0 )
				{
					break;
				}
			}
			return j;
		}
		else
		{
			return i*13;
		}
		
	}
}

int MarsNums(int argc, char* argv[])
{
	
	unordered_map<string,int> shiweiMap;
	
	int N;cin>>N;	getchar();
	for (int i = 0; i < N; ++i)
	{
		string s;		
		getline(cin,s);
		if (isdigit(s[0]) != 0)
		{
			int shi=stoi(s)/13;
			int ge=stoi(s)%13;
			if (shi == 0)
			{
				cout<<gewei[ge]<<endl;
			}
			else
			{
				if (ge == 0)
				{
					cout<<shiwei[shi]<<endl;
				}
				else {cout<<shiwei[shi]<<" "<<gewei[ge]<<endl;  }
				
			}
		}
		else
		{
			int ans =marToEarth(s);
			cout<<ans<<endl;
		}
		
	}

	return 0;
}
