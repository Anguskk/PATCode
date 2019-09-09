#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <map>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;
unordered_map<int, set<int>>  courselist;
int hashName(char* name)
{
	int id=0;
	for (int i = 0; i < 3; ++i)
	{
		id = id*26+ (name[i]-'A');
	}
		id = id*10+ (name[4]-'0');
	return  id;
}
int CourseList(int argc, char *argv[])
{
	int N, K; cin >> N >> K;
	for (int i=0;i<K;i++)
	{
		int course, num; cin >> course >> num;
		for (int i=0;i<num;i++)
		{
			char name[5];
			//name.resize(5);
			scanf("%s",name);
			int id=hashName(name);
			courselist[id].insert(course);
		}
	}
	for (int i=0;i<N;i++)
	{
		char name[5];
		//name.resize(5);
		scanf("%s", name);
		printf("%s ", name);
		int id= hashName(name);
		if (courselist.find(id) == courselist.end())
		{
			cout << "0" << endl;
		}
		else
		{
			cout << courselist[id].size();
			for (auto it=courselist[id].begin();it!= courselist[id].end();it++)
			{
				printf(" %d", *it);
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}
//long long int a;
//cin >> a;
//long long int b = (long long int)pow(2.0, 61);
//cout << b << endl;
//cout << a << endl;
//ѧϰ
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int getid(char *name) {
//    int id = 0;
//    for(int i = 0; i < 3; i++)
//        id = 26 * id + (name[i] - 'A');
//    id = id * 10 + (name[3] - '0');
//    return id;
//}
//const int maxn = 26 * 26 * 26 * 10 + 10;
//vector<int> v[maxn];
//
//int main() {
//    int n, k, no, num, id = 0;
//    char name[5];
//    scanf("%d %d", &n, &k);
//    for(int i = 0; i < k; i++) {
//        scanf("%d %d", &no, &num);
//        for(int j = 0; j < num; j++) {
//            scanf("%s", name);
//            id = getid(name);
//            v[id].push_back(no);
//        }
//    }
//    for(int i = 0; i < n; i++) {
//        scanf("%s", name);
//        id = getid(name);
//        sort(v[id].begin(), v[id].end());
//        printf("%s %lu", name, v[id].size());
//        for(int j = 0; j < v[id].size(); j++)
//            printf(" %d", v[id][j]);
//        printf("\n");
//    }
//    return 0;
//}