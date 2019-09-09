#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace  std;
//struct student
//{
//	string name;
//	string ID;
//	char gender;
//	int grade;
//	
//};
//bool cmp1(const student &s1,const student &s2)
//{
//	return s1.grade<s2.grade;
//}
//vector<student> mStu;
//vector<student> fStu;
//int Boyvsgirl(int argc, char* argv[])
//{
//	int n;
//	cin>>n;
//	for (int i = 0; i < n; ++i)
//	{
//		student s;
//		cin>>s.name>>s.gender>>s.ID>>s.grade;
//		if (s.gender=='M')
//		{
//			mStu.push_back(s);
//		}
//		else
//		{
//			fStu.push_back(s);
//		}
//	}
//	
//	
//	if (fStu.empty())
//	{
//		cout<<"Absent"<<endl;
//	}
//	else
//	{
//		sort(fStu.begin(),fStu.end(),cmp1);
//		printf("%s %s\n",fStu[fStu.size()-1].name.c_str(),fStu[fStu.size()-1].ID.c_str());
//	}
//	if (mStu.empty())
//	{
//		cout<<"Absent"<<endl;
//	}
//	else
//	{
//		sort(mStu.begin(),mStu.end(),cmp1);
//		printf("%s %s\n",mStu[0].name.c_str(),mStu[0].ID.c_str());
//	}
//	if (fStu.empty() || mStu.empty())
//	{
//		cout<<"NA"<<endl;
//	}
//	else
//	{
//		cout<<fStu[fStu.size()-1].grade-mStu[0].grade<<endl;
//	}
//	return 0;
//}
