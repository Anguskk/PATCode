#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//stable_sort²úÉú¶Î´íÎóÊ²Ã´¹í
using namespace  std;
//struct student
//{
//	string name;
//	string id;
//	int grade;
//	student(string name,string id,int grade)
//	{
//		this->name= name;
//		this->id= id;
//		this->grade = grade;
//	}
//};
//bool cmp(const student &s1,const student &s2)
//{
//	return s1.grade>s2.grade;
//}
//vector<student> v;
//int binaryFind(int left,int right,int obj)
//{
//	
//	while (left<=right)
//	{
//		int mid=(left+right)/2;
//		if (v[mid].grade == obj)
//		{
//			return mid;
//		}
//		else if (v[mid].grade<obj)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			left=mid+1;
//		}
//
//	}
//}
//int ListGrade1083(int argc, char* argv[])
//{
//	int N;cin>>N;
//	
//	string pname,pid;
//	int pgrade;
//	for (int i = 0; i < N; ++i)
//	{
//		cin>>pname>>pid>>pgrade;
//		v.push_back(student(pname,pid,pgrade));
//
//	}
//	
//	int lower,upper;
//	cin>>lower>>upper;
//	sort(v.begin(),v.end(),cmp);
//	if (lower>v[0].grade || upper<v[N-1].grade  || lower>upper)
//	{
//		cout<<"NONE"<<endl;
//		return 0;
//	}
//	int upBound =binaryFind(0,N-1,upper);
//	for (int i = upBound; v[i].grade>=lower; ++i)
//	{
//		printf("%s %s\n",v[i].name.c_str(),v[i].id.c_str());
//	}
//	return 0;
//}
