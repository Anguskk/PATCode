#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;
#include <vector>
#include <string>
#include <cstdlib>
struct testee
{
	string info;
	char level;
	int site;
	int date;
	int num;
	int score;
};
//testee testees[10001];
//bool flagsSite[1001];
//bool flagDate[1000001];
//vector< vector<testee> > result1;
//unordered_map<int,pair<int,int> > result2;
//unordered_map<int, vector<pair<int,int>> > result3;
//bool cmp1(testee &t1,testee &t2)
//{
//	if (t1.level==t2.level) return t1.score ==t2.score ? t1.info<t2.info : t1.score>t2.score;
//	else 
//		return t1.level<t2.level;
//}
//bool cmp3(pair<int,int> &p1,pair<int,int> &p2)
//{
//	if (p1.second==p2.second) return p1.first<p2.first;
//	return p1.second>p2.second;
//}
//bool cmpSite(testee &t1,testee &t2)
//{
//	return  t1.site<t2.site;
//}
//bool cmpDate(testee &t1,testee &t2)
//{
//	if (t1.date == t2.date)
//	{
//		return  t1.site<t2.site;
//	}
//	return  t1.date<t2.date;
//}
//void statistic1(vector<testee> &vecTestee)
//{
//	vector<testee> tempVec;
//	int head=0;
//	for (int j = 1; j < vecTestee.size(); ++j)
//	{
//		if (vecTestee[j].level != vecTestee[j-1].level)
//		{
//			tempVec.assign(vecTestee.begin()+head,vecTestee.begin()+j);
//			result1.push_back(tempVec);
//			head=j;
//		}
//		
//	}
//	tempVec.assign(vecTestee.begin()+head,vecTestee.end());
//	result1.push_back(tempVec);
//	
//}
//void solve1(char level)
//{
//	if (level != 'A' && level != 'B' && level != 'T'){
//		cout<<"NA"<<endl;
//		return;
//	}
//	if (level=='A')
//	{
//		for_each(result1[0].begin(),result1[0].end(),[](testee &t1)
//			{
//				printf("%s %d\n",t1.info.c_str(),t1.score);
//			});
//		
//	}
//	else if (level=='B')
//	{
//			for_each(result1[1].begin(),result1[1].end(),[](testee &t1)
//			{
//				printf("%s %d\n",t1.info.c_str(),t1.score);
//			});
//	}
//	else if (level=='T')
//	{
//		for_each(result1[2].begin(),result1[2].end(),[](testee &t1)
//			{
//				printf("%s %d\n",t1.info.c_str(),t1.score);
//			});
//	}
//}
//void statistic2(vector<testee> &vecTestee,int n)
//{
//	int cnt=1,total=vecTestee[0].score;
//	flagsSite[vecTestee[0].site] = true;
//	for (int i=1;i<n;i++)
//	{
//		if (vecTestee[i].site != vecTestee[i-1].site)
//		{
//			result2[vecTestee[i-1].site]=make_pair(cnt,total);
//			cnt =1;
//			total = vecTestee[i].score;
//			flagsSite[vecTestee[i].site] = true;
//		}
//		else
//		{
//			cnt +=1;
//			total += vecTestee[i].score;
//		}
//	}
//	flagsSite[vecTestee[n-1].site] = true;
//	result2[vecTestee[n-1].site]=make_pair(cnt,total);
//}
//
//void solve2(int site)
//{
//	if (flagsSite[site] == false)
//	{
//		cout<<"NA"<<endl;
//		return;
//	}
//	printf("%d %d\n",result2[site].first,result2[site].second);
//}
//void solve3(int date)
//{
//
//	if (flagDate[date] == false)
//	{
//		cout<<"NA"<<endl;
//		return;
//	}
//	vector<pair<int,int>> &tempVec=result3[date];
//	for (int i = 0; i < tempVec.size(); ++i)
//	{
//		printf("%d %d\n",tempVec[i].first,tempVec[i].second);	
//	}
//}
//void statistic3(vector<testee> &vecTestee)
//{
//	flagDate[vecTestee[0].date]=true;
//	int cnt=1;int site=vecTestee[0].site;int date=vecTestee[0].date;
//	vector<pair<int,int>> vectemp;
//	for (int i = 1; i < vecTestee.size(); ++i)
//	{
//		
//		if (vecTestee[i].date != vecTestee[i-1].date)
//		{
//			vectemp.push_back(make_pair(site,cnt));
//			if (vectemp.size()>1)
//			{
//			sort(vectemp.begin(),vectemp.end(),cmp3);	
//			}			
//			result3[date] = vectemp;
//			flagDate[vecTestee[i].date]=true;
//			cnt=1;site=vecTestee[i].site;date=vecTestee[i].date;
//			vectemp.clear();
//		}
//		else if (vecTestee[i].site!=vecTestee[i-1].site)
//		{
//			vectemp.push_back(make_pair(site,cnt));
//			cnt=1;
//			site=vecTestee[i].site;
//		}
//		else
//		{
//			cnt++;
//		}
//	}
//	vectemp.push_back(make_pair(site,cnt));
//	sort(vectemp.begin(),vectemp.end(),cmp3);
//	result3[date] = vectemp;
//	flagDate[vecTestee[vecTestee.size()-1].date]=true;
//}
//int RegistrationCardofPat()
//{
//	int N,Q;
//	cin>>N>>Q;
//	for (int i=0;i<N;i++)
//	{
//		string s;
//		int tempscore;
//		cin>>s;cin>>tempscore;
//		testees[i].info =  s;
//		testees[i].level=testees[i].info[0];
//		testees[i].site=stoi(testees[i].info.substr(1,3));
//		testees[i].date=stoi(testees[i].info.substr(4,6));
//		testees[i].num=stoi(testees[i].info.substr(10,3));
//		testees[i].score = tempscore;
//	}
//	vector<pair<int,string>> query;
//	for (int i=0;i<Q;i++)
//	{
//		int type;
//		string questions;
//		cin>>type>>questions;
//		query.push_back(make_pair(type,questions));
//	}
//	vector<testee> sortBy(testees,testees+N);
//	sort(sortBy.begin(),sortBy.end(),cmp1);
//	statistic1(sortBy);
//	//vector<testee> sortBySite(testees,testees+N);
//	sort(sortBy.begin(),sortBy.end(),cmpSite);
//	statistic2(sortBy,N);
//	//vector<testee> sortByDate(testees,testees+N);
//	sort(sortBy.begin(),sortBy.end(),cmpDate);
//	statistic3(sortBy);
//	for (int i=0;i<Q;i++)
//	{
//		printf("Case %d: %d %s\n",i+1,query[i].first,query[i].second.c_str());
//		if (query[i].first == 1)
//		{
//			solve1(query[i].second.c_str()[0]);
//		}
//		else if (query[i].first == 2)
//		{
//			solve2(stoi(query[i].second));
//		}
//		else if (query[i].first == 3)
//		{
//			solve3(stoi(query[i].second));
//		}
//		else { cout<<"NA"<<endl; }
//		
//	}
//
//	return 0;
//}