#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace  std;
//struct vvvstudent
//{
//	int id;
//	string name;
//	int grade;
//};
//bool cmp1(const vvvstudent &s1,const vvvstudent &s2)
//{
//	return s1.id<s2.id;
//}
//bool cmp2(const vvvstudent &s1,const vvvstudent &s2)
//{
//	if (s1.name == s2.name)
//	{
//		return s1.id<s2.id;
//	}
//	return s1.name<s2.name;
//}
//bool cmp3(const vvvstudent &s1,const vvvstudent &s2)
//{
//	if (s1.grade == s2.grade)
//	{
//		return s1.id<s2.id;
//	}
//	return s1.grade<s2.grade;
//}
//vector<vvvstudent> vStu;
//int ListSorting(int argc, char* argv[])
//{
//	int n,c;
//	cin>>n>>c;
//	for (int i = 0; i < n; ++i)
//	{
//		vvvstudent s;
//		cin>>s.id>>s.name>>s.grade;
//		vStu.push_back(s);
//	}
//	if (c==1)
//	{
//		sort(vStu.begin(),vStu.end(),cmp1);
//	}
//	else if (c==2)
//	{
//		sort(vStu.begin(),vStu.end(),cmp2);
//	}else
//	{
//		sort(vStu.begin(),vStu.end(),cmp3);
//	}
//	for (int i = 0; i < vStu.size(); ++i)
//	{
//		printf("%06d %s %d\n",vStu[i].id,vStu[i].name.c_str(),vStu[i].grade);
//	}
//	return 0;
//}
