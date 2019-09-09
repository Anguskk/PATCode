//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <utility>
//#include <functional>
//using namespace  std;
//struct _LinkedNode
//{
//	int address,data,next;
//};
//_LinkedNode linked_node[100001];
//bool isRepeat[10001];
//int ReverseLinkedList(int argc, char* argv[])
//{
//	int start,N,K;
//	cin>>start>>N>>K;
//	int add,d,next;
//	for (int i = 0; i < N; ++i)
//	{
//		scanf("%d %d %d",&add,&d,&next);
//		linked_node[add].address=add;
//		linked_node[add].data=d;
//		linked_node[add].next=next;
//	}
//	vector<_LinkedNode> vlist;
//	for (int p=start;p!= -1 ;p = linked_node[p].next)
//	{
//		vlist.push_back(linked_node[p]);
//	}
//	stack<_LinkedNode> s;
//	queue<_LinkedNode> q;
//	int cnt=0;
//	for (int i = 0; i < vlist.size(); ++i)
//	{
//		s.push(vlist[i]);
//		cnt +=1;
//		if (cnt% K ==0)
//		{
//			_LinkedNode temp;
//			while (!s.empty())
//			{
//				q.push(s.top());
//				s.pop();
//			}
//			
//		}
//	}
//	if (!s.empty())
//	{
//		stack<_LinkedNode>  s2;
//		while (!s.empty())
//		{
//			s2.push(s.top());
//			s.pop();
//		}
//		while (!s2.empty())
//		{
//			q.push(s2.top());
//			s2.pop();
//		}
//	}
//	vector<_LinkedNode> v;
//	//auto v=q._Get_container();
//	while (!q.empty())
//	{
//		v.push_back(q.front());
//		q.pop();
//	}
//	for (int i=0; i<v.size(); ++i)
//	{
//		if (i == v.size()-1)
//		{
//			printf("%05d %d -1\n",v[i].address,
//				v[i].data);	
//		}
//		else
//		{
//			printf("%05d %d %05d\n",v[i].address,
//				v[i].data,v[i+1].address);	
//		}
//		
//	}
//	return 0;
//}