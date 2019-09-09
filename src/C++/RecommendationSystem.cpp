#include <iostream>
#include <list>
#include <queue>
#include <memory.h>
#include <set>
using namespace  std;
struct node
{
	int key;
	int cnt;
	node(int k,int v)
	{
		key = k;
		cnt = v;
	}
	bool operator<(const node &n1)const
	{
		if (cnt == n1.cnt)
		{
			return key<n1.key;
		}
		return cnt>n1.cnt;
	}
};
int cnts[50001]={0};
//set<node> recommend;
int RecommendSystem(int argc, char* argv[])
{	
	/*priority_queue<node> recommend  ;	
	int query,K;cin>>query>>K;
	int poll;
	cin>>poll;
	cnts[poll] +=1;
	recommend.push(node(poll,cnts[poll]));	
	for (int i = 2; i <= query; ++i)
	{
		scanf("%d",&poll);
		printf("%d:",poll);
		vector<node> store;
		for (int j=0;j<K&&!recommend.empty();j++ )
		{
			node temp = recommend.top();
			recommend.pop();
			store.push_back(temp);
			printf(" %d",temp.key);			
		}
		cout<<endl;
		for (int i = 0; i < ; ++i)
		{
			
		}
		auto it2=recommend.find(node(poll,cnts[poll]));
		if (it2 != recommend.end())		
		{
			recommend.erase(it2);
		}
		cnts[poll] +=1;
		recommend.insert(node(poll,cnts[poll]));
	}
	return 0;*/
	return 0;
}
////priority_queue<int > myque  ;
//	
//	int query,K;cin>>query>>K;
//	int poll;
//	cin>>poll;
//	cnts[poll] +=1;
//	recommend.insert(node(poll,cnts[poll]));	
//	for (int i = 2; i <= query; ++i)
//	{
//		scanf("%d",&poll);
//		printf("%d:",poll);
//		int j=0;
//		for (auto it = recommend.begin(); it != recommend.end() && j<K; ++it,++j)
//		{
//			
//			printf(" %d",it->key);			
//		}
//		cout<<endl;
//		
//		auto it2=recommend.find(node(poll,cnts[poll]));
//		if (it2 != recommend.end())		
//		{
//			recommend.erase(it2);
//		}
//		cnts[poll] +=1;
//		recommend.insert(node(poll,cnts[poll]));
//	}