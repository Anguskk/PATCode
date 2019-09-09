#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace  std;
#include <string>
#include <memory.h>
#include <map>
bool cmp(const pair<string,int> &p1,const pair<string,int> &p2)
{
	return p1.second<p2.second;
}
bool cmp2(const pair<string,int> &p1,const pair<string,int> &p2)
{
	return p1.first<p2.first;
}
//struct people
//{
//	string name;
//	int weight;
//	people(string name,int w)
//	{
//		this->name=name;
//		this->weight = w;
//	}
//};
struct Gang
{
	int Cntmember;
	int total;
	map<string,int> members;
	string head;
	Gang()
	{
		total=0;
		Cntmember=0;
	}
};

vector<Gang> gangs;
unordered_map<string,int> lookup;
int HeadOfGang(int argc, char* argv[])
{
	
	int N,threhold;
	cin>>N>>threhold;
	string p1,p2;int w;
	int cntOrg=0;
	for (int i = 0; i < N; ++i)
	{
		cin>>p1>>p2>>w;
		unordered_map<string,int>::iterator it1=lookup.find(p1);
		unordered_map<string,int>::iterator it2=lookup.find(p2);
		if (it1==lookup.end() && it2==lookup.end())
		{						
			Gang  newGang;
			newGang.total +=w;
			newGang.Cntmember = 2;
			newGang.members[p1]=w;
			newGang.members[p2]=w;
		
			gangs.push_back(newGang);
			lookup[p1]=cntOrg;
			lookup[p2]=cntOrg;
			cntOrg +=1;
		}
		else 
		{
			if (it1 == lookup.end())
			{
				lookup[p1]=(*it2).second;
				gangs[(*it2).second].Cntmember +=1;
				gangs[(*it2).second].members[p1] = w;
				gangs[(*it2).second].members[p2] += w;
				gangs[(*it2).second].total +=w;
			}
			else if (it2==lookup.end())
			{
				lookup[p2]=(*it1).second;
				gangs[(*it1).second].Cntmember +=1;
				gangs[(*it1).second].members[p2] = w;
				gangs[(*it1).second].members[p1] += w;
				gangs[(*it1).second].total +=w;
			}
			else
			{
				gangs[(*it1).second].members[p1] += w;
				gangs[(*it1).second].members[p2] += w;
				gangs[(*it2).second].total +=w;
			}		
						
		}
		
	}
	vector<pair<string,int>> ans;
	for (int i = 0; i < gangs.size(); ++i)
	{
		if (gangs[i].total>threhold && gangs[i].Cntmember>2)
		{
			//sort(gangs[i].members.begin(),gangs[i].members.end(),cmp);
			//make_heap(gangs[i].members.begin(),gangs[i].members.end());
			vector<pair<string,int>>  cpval(gangs[i].members.begin(),gangs[i].members.end());
			//堆排序和快排复杂度一样
			make_heap(cpval.begin(),cpval.end(),cmp);
			ans.push_back(make_pair(cpval[0].first,gangs[i].Cntmember));
		}
	}
	
	sort(ans.begin(),ans.end(),cmp2);
	cout<<ans.size()<<endl;
	for (int i = 0; i < ans.size(); ++i)
	{
				
		printf("%s %d\n",ans[i].first.c_str(),ans[i].second);
	}
	return 0;
}
//另外考虑DFS  搜索连通分量
//#include <iostream>
//#include <map>
//using namespace std;
//map<string, int> stringToInt;
//map<int, string> intToString;
//map<string, int> ans;
//int idNumber = 1, k;
//int stoifunc(string s) {
//    if(stringToInt[s] == 0) {
//        stringToInt[s] = idNumber;
//        intToString[idNumber] = s;
//        return idNumber++;
//    } else {
//        return stringToInt[s];
//    }
//}
//int G[2010][2010], weight[2010];
//bool vis[2010];
//void dfs(int u, int &head, int &numMember, int &totalweight) {
//    vis[u] = true;
//    numMember++;
//    if(weight[u] > weight[head])
//        head = u;
//    for(int v = 1; v < idNumber; v++) {
//        if(G[u][v] > 0) {
//            totalweight += G[u][v];
//            G[u][v] = G[v][u] = 0;
//            if(vis[v] == false)
//                dfs(v, head, numMember, totalweight);
//        }
//    }
//}
//void dfsTrave() {
//    for(int i = 1; i < idNumber; i++) {
//        if(vis[i] == false) {
//            int head = i, numMember = 0, totalweight = 0;
//            dfs(i, head, numMember, totalweight);
//            if(numMember > 2 && totalweight > k)
//                ans[intToString[head]] = numMember;
//        }
//    }
//}
//int main() {
//    int n, w;
//    cin >> n >> k;
//    string s1, s2;
//    for(int i = 0; i < n; i++) {
//        cin >> s1 >> s2 >> w;
//        int id1 = stoifunc(s1);
//        int id2 = stoifunc(s2);
//        weight[id1] += w;
//        weight[id2] += w;
//        G[id1][id2] += w;
//        G[id2][id1] += w;
//    }
//    dfsTrave();
//    cout << ans.size() << endl;
//    for(auto it = ans.begin(); it != ans.end(); it++)
//        cout << it->first << " " << it->second << endl;
//    return 0;
//}