#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//统计和输出
struct Pstudent
{
	string id;
	int online;
	int mid;
	int final;
	float weightScore;
	int Gscore;
	bool isInFinal;
	Pstudent()
	{
		mid=0;
		online=0;
		final=0;
	}
};
map<string,Pstudent> students;
bool mycomp(const Pstudent &s1,const Pstudent &s2)
{
	if (s1.Gscore == s2.Gscore)
	{
		return  s1.id<s2.id;
	}
	else
	{
		return s1.Gscore > s2.Gscore;
	}
}
int finalGrading(int argc, char* argv[])
{
	int p1,p2,p3;
	string name;
	cin>>p1>>p2>>p3;
	for (int i = 0; i < p1; ++i)
	{
		int temp;
		cin>>name>>temp;
		students[name].online=temp;
		students[name].id = name;
	}
	for (int i = 0; i < p2; ++i)
	{
		int temp;
		cin>>name>>temp;
		students[name].mid=temp;
		students[name].id = name;
	}
	for (int i = 0; i < p3; ++i)
	{
		int temp;
		cin>>name>>temp;
		students[name].final=temp;
		students[name].id = name;
		students[name].isInFinal = true;
		if (students[name].mid>students[name].final)
		{
			students[name].weightScore=0.40*students[name].mid+0.60*students[name].final;
		}
		else
		{
			students[name].weightScore = students[name].final;			
		}
		students[name].Gscore = (int) (students[name].weightScore+0.5);
		if (students[name].mid==0)
		{
			students[name].mid = -1;
		}
	}
	vector<Pstudent> v;
	for (auto it=students.begin(); it!=students.end(); ++it)
	{
		if (it->second.online>=200 && it->second.Gscore>=60 &&it->second.isInFinal)
		{
			v.push_back(it->second);
		}
	}
	sort(v.begin(),v.end(),mycomp);
	for (int i = 0; i < v.size(); ++i)
	{
		printf("%s %d %d %d %d\n",
			v[i].id.c_str(),v[i].online,v[i].mid,v[i].final,v[i].Gscore);
	}
	return 0;
}
