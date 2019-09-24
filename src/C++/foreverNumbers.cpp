#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<map>
#include <algorithm>
#include<cctype>
#include<vector>
using namespace std;
int gcd(int a ,int b){
	return a%b == 0 ? b : gcd(b, a%b);
}
int sumOfdigihts(int n){
	int sum = 0;
	while (n>0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}
bool mycmp(const pair<int,int > &p1,const  pair<int,int> &p2){
	if (p1.first != p2.first)
	{
		return p1.first < p2.first;
		
	}
	else
	{
		return p1.second < p2.second;
	}
}
using namespace std;
int foreverNumbers(){
	//printf("Hello,world");
	//int a = 10, b = 100;
	//string s = "abc";
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
	{
		vector<pair<int,int>> ans;
		int K, m; cin >> K >> m;
		printf("Case %d\n", i);
		int start = (int)pow(10*1.0, K-1);
		int end = (int)pow(10*1.0, K);
		for (int j = start; j < end; j++)
		{
			if (sumOfdigihts(j) == m)
			{
				int temp = sumOfdigihts(j + 1);
				int maxn, minn;
				if (m>temp)
				{
					maxn = m; minn = temp;
				}
				else
				{
					maxn = temp; minn = m;
				}
				int GCD_mn = gcd(maxn, minn);
				if (GCD_mn >2)
				{
					ans.push_back(make_pair(temp, j));
				}
			}
		}
		if (ans.size() == 0)
		{
			printf("No Solution\n");
			continue;
		}
		//sort(ans.begin(), ans.end(), mycmp);
		for (int i = 0; i < ans.size(); i++)
		{
			printf("%d %d\n", ans[i].first, ans[i].second);
		}
	}

	return 0;
}