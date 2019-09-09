//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace  std;
//struct _LinkedNode
//{
//	int address,data,next;
//
//};
//_LinkedNode linked_node[100001];
//bool isRepeat[10001];
//int DeduplicationLinkedList(int argc, char* argv[])
//{
//	int start,N;
//	cin>>start>>N;
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
//	vector<_LinkedNode> DeduplicationList;
//	vector<_LinkedNode> duplicationList;
//	for (int i = 0; i < vlist.size(); ++i)
//	{
//		if (isRepeat[abs(vlist[i].data)] == false)
//		{
//			DeduplicationList.push_back(vlist[i]);
//			isRepeat[abs(vlist[i].data)] = true;
//		}
//		else
//		{
//			duplicationList.push_back(vlist[i]);
//		}
//	}
//	for (int i = 0; i < DeduplicationList.size(); ++i)
//	{
//		if (i== DeduplicationList.size()-1)
//		{
//			printf("%05d %d -1\n",DeduplicationList[i].address,
//				DeduplicationList[i].data);	
//		}
//		else
//		{
//			printf("%05d %d %05d\n",DeduplicationList[i].address,
//				DeduplicationList[i].data,DeduplicationList[i+1].address);	
//		}
//		
//	}
//		for (int i = 0; i < duplicationList.size(); ++i)
//	{
//		if (i== duplicationList.size()-1)
//		{
//			printf("%05d %d -1\n",duplicationList[i].address,
//				duplicationList[i].data);	
//		}
//		else
//		{
//			printf("%05d %d %05d\n",duplicationList[i].address,
//				duplicationList[i].data,duplicationList[i+1].address);	
//		}
//		
//	}
//	return 0;
//}
