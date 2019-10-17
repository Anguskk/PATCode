#include <iostream>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <vector>
#include <queue>
#include <string>
#include <regex>
using namespace std;
void mergeTest()
{
	//Merge test
	srand(NULL);
	vector<int> va,vb,vc;
	for (int i = 0; i < 100; ++i)
	{
		va.push_back(rand()%INT_MAX);
	}
	
	for (int i = 0; i < 200; ++i)
	{
		vb.push_back(rand()%INT_MAX);
	}
	sort(va.begin(),va.end(),greater<int>());
	sort(vb.begin(),vb.end(),greater<int>());
	vc.resize(va.size()+vb.size());
	merge(va.begin(),va.end(),vb.begin(),vb.end(),vc.begin(),greater<int>());
}
void nthElementTest()
{
	vector<int> vA;
	for (int i = 0; i < 10; ++i)
	{
		vA.push_back(rand()%100);
	}
	random_shuffle(vA.begin(),vA.end());
	int mid=3;
	for (int i = 0; i <vA.size(); ++i)
	{
		printf("%d ",vA[i]);
	}
	cout<<endl;
	
	nth_element(vA.begin(),vA.begin()+mid,vA.end());
	for (int i = 0; i <vA.size(); ++i)
	{
		printf("%d ",vA[i]);
	}
	cout<<endl;
	//priority_queue<pair<int,int>,>
	int a[] = {0,1,5,3,2,4,6};
	nth_element(a,a+3,a+7);
	for(int i = 0;i < 7;i++)	cout << a[i] << " ";
}
void dijisktraPriorityqTest()
{
	//priority_queue pair test   Dijskra     pair(disTo[v],v)
	priority_queue<pair<int,int>,vector<pair<int,int>>,less<pair<int,int>>> q;
	for (int i = 0; i < 10; ++i)
	{
		q.push(make_pair(rand()%30,rand()%100));
	}
	while (!q.empty())
	{
		cout<<q.top().first<<"  "<<q.top().second<<endl;
		q.pop();
		
	}
}

int test1(int argc, char* argv[])
{
	//srand(NULL);
	string str="absd  iji word  ted";
	smatch res1,res2,res3;
	cmatch res4;
	
	std::string fnames[] = {"foo.txt", "bar.txt", "baz.dat", "zoidberg"};
    regex txt_regex("[a-z]+\\.txt");
 
    for (int i=0; i<4;i++) {
        cout << fnames[i] << ": " << regex_match(fnames[i], txt_regex) << endl;
    }  
	if (regex_match("241412",res4,regex("\\d+")))
	{
		cout<<res4.str()<<endl;
	}
	
	;
	cout<<regex_match("241412",regex("\\d"))<<endl;
	//regex_search("241412",res3,regex("\\d"));
	cout<<regex_match("aaAAA",regex("a*",regex::icase))<<endl;
	cout<<regex_match("aaAAA",regex("a*"))<<endl;

	return 0;
}
