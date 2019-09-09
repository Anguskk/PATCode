#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace  std;
struct people_
{
	string name;
	int height;
};

bool mycmp(const people_ &p1,const people_ &p2)
{
	return p1.height == p2.height? p1.name>p2.name : p1.height<p2.height;
}
vector< vector<people_> > ans;
int GroupPhoto(int argc, char* argv[])
{
	vector<people_> groups;
	int n,row;
	cin>>n>>row;
	groups.resize(n);
	for (int i = 0; i < n; ++i)
	{
		string name;int h;
		cin>>name>>h;
		groups[i].name = name;
		groups[i].height = h;
	}
	sort(groups.begin(),groups.end(),mycmp);
	int colum= n/row;
	int lastCol = colum+ n%row;
	int pcnt=0;
	for (int i = 1; i <= row; ++i)
	{
		stack<people_> s;
		if (i == row)
		{
			for (int j = 0; j < lastCol; ++j)
			{
				s.push(groups[pcnt++]);
			}
		}
		else
		{
			for (int j = 0; j < colum; ++j)
			{
				s.push(groups[pcnt++]);
			}

		}
		deque<people_> dq;
		dq.push_back(s.top());
		s.pop();
		int reverse=0;
		while (!s.empty())
		{
			if (reverse %2 ==0)
			{
				dq.push_front(s.top());
			}
			else
			{
				dq.push_back(s.top());
			}
			s.pop();
			reverse +=1;
		}
		vector<people_>  temp;
		temp.assign(dq.begin(),dq.end());
		ans.push_back(temp);
	}
	for (int i = row-1; i >= 0; --i)
	{
		for (int j = 0; j < ans[i].size(); ++j)
		{
			if (j == 0)
			{
				printf("%s",ans[i][j].name.c_str());
			}
			else
			{
				printf(" %s",ans[i][j].name.c_str());
			}
		}
		cout<<endl;
	}
	return 0;
}