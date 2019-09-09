#include <iostream>
#include <map>
#include <string>
#include <locale>
#include <vector>
#include <algorithm>
using namespace std;
void tolowerCase(string &s)
{
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i]>='A' && s[i]<='Z')
		{
			s[i] = 'a'+(s[i]-'A');
		}
	}
}

struct CampusInstition
{
	int rank;
	string name;
	float total;
	int final;
	int cntofTestee;
	CampusInstition()
	{
		total=0.0;
		cntofTestee=1;
		rank=0;
	}
};
void addScore(CampusInstition &c,char &t,int s)
{
	if (t=='T')
	{
		c.total += s*1.5;
	}
	else if (t=='A')
	{
		c.total += s;
	}
	else if (t=='B')
	{
		c.total += s/1.5;
	}
	
}
map<string,CampusInstition> InstitionInfo;
vector<CampusInstition>   institions;
bool mycmp(const CampusInstition &a,const CampusInstition &b)
{
	if (a.final==b.final)
	{
		return a.cntofTestee<b.cntofTestee;
	}
	return a.final>b.final;
}
int PatRankingofInstitution(int argc, char* argv[])
{
	int n;cin>>n;getchar();
	string info;
	int score;
	string name;
	for (int i = 0; i < n; ++i)
	{
		string temp;
		//char *s;gets(s);
		//getline(cin,temp);
		cin>>info>>score>>name;
		tolowerCase(name);
		if (InstitionInfo.find(name) == InstitionInfo.end())
		{
			CampusInstition temp;
			temp.name=name;			
			addScore(temp,info[0],score);
			InstitionInfo[name]=temp;
		}
		else
		{
			InstitionInfo[name].cntofTestee +=1;
			addScore(InstitionInfo[name],info[0],score);
		}
	}
	for (auto it = InstitionInfo.begin(); it != InstitionInfo.end(); ++it)
	{
		it->second.final=(int)(floor(it->second.total));
		institions.push_back(it->second);		
	}
	stable_sort(institions.begin(),institions.end(),mycmp);
	int tempRank=1;
	institions[0].rank=1;
	for (int i = 1; i < institions.size(); ++i)
	{
		if (institions[i].final<institions[i-1].final)
		{
			tempRank=i+1;
			institions[i].rank=tempRank;
		}
		else
		{
			institions[i].rank=institions[i-1].rank;
		}
	}
	cout<<institions.size()<<endl;
	for (int i = 0; i < institions.size(); ++i)
	{
		printf("%d %s %d %d\n",institions[i].rank,
					institions[i].name.c_str(),institions[i].final,institions[i].cntofTestee);
	}

	return 0;
}
