#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
//bool isRetail[100001]={false};
struct SupplyChain
{
	int id;
	int parent;
	bool isRetail;
	int level;
	SupplyChain()
	{
		parent =-1;
		isRetail = false;
		level = 0;
	}
};
SupplyChain chains[100001];

bool cmp1(const SupplyChain &s1,const SupplyChain &s2)
{
	return s1.level<s2.level;
}
void updateLevel(int p)
{
	int cnt=1;
	int index=p;
	while (chains[p].parent != 0)
	{
		p = chains[p].parent;
		cnt +=1;
	}
	chains[index].level = cnt;
}
int LowestSupplyChain(int argc, char* argv[])
{
	int N;
	double price,rate;
	cin>>N>>price>>rate;
	for (int i = 0; i < N; ++i)
	{
		chains[i].id = i;
	}
	chains[0].parent = 0;
	vector<int> retails;
	for (int i = 0; i < N; ++i)
	{
		int k;cin>>k;
		if (k == 0)
		{
			chains[i].isRetail = true;
			retails.push_back(i);
		}
		else
		{
			for (int j = 0; j < k; ++j)
			{
				int temp;scanf("%d",&temp);
				chains[temp].parent = i;
			}
		}


	}
	vector<SupplyChain> ans;
	for (int i = 0; i < retails.size(); ++i)
	{
		int index =retails[i];
		updateLevel(index);
		ans.push_back(chains[index]);
	}
	sort(ans.begin(),ans.end(),cmp1);
	int obj=ans[0].level;
	int count=1;
	for (int i = 1; i < ans.size(); ++i)
	{
		if (ans[i].level > obj)
		{
			break;
		}		
		count +=1;
		
	}
	double lowPrice = price*pow(1+rate/100,count);
	printf("%.4lf %d\n",lowPrice,count);
	return 0;
}/*
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
vector<int> v[100005];
int mindepth = 99999999, minnum = 1;
void dfs(int index, int depth) {
    if(mindepth < depth)
        return ;
    if(v[index].size() == 0) {
        if(mindepth == depth)
            minnum++;
        else if(mindepth > depth) {
            mindepth = depth;
            minnum = 1;
        }
    }
    for(int i = 0; i < v[index].size(); i++)
        dfs(v[index][i], depth + 1);
}
int main() {
    int n, k, c;
    double p, r;
    scanf("%d %lf %lf", &n, &p, &r);
    for(int i = 0; i < n; i++) {
        scanf("%d", &k);
        for(int j = 0; j < k; j++) {
            scanf("%d", &c);
            v[i].push_back(c);
        }
    }
    dfs(0, 0);
    printf("%.4f %d", p * pow(1 + r/100, mindepth), minnum);
    return 0;
}*/