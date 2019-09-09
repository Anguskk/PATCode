//#include <iostream>
//#include <vector>
//using namespace  std;
//
//struct LinkedNode_
//{
//	int address;
//	int data;
//	int next;
//
//};
//LinkedNode_   linked_nodes[100001];
//vector<LinkedNode_> Vnegpart;
//vector<LinkedNode_> VlessK;
//vector<LinkedNode_> VGreaterK;
//void ListAccess(int s,int K)
//{
//	while (s!=-1)	
//	{
//		//v.push_back(linked_nodes[s].data);
//		if (linked_nodes[s].data<0)
//		{
//			Vnegpart.push_back(linked_nodes[s]);
//		}
//		else if (linked_nodes[s].data<=K)
//		{
//			VlessK.push_back(linked_nodes[s]);
//		}
//		else
//		{
//			VGreaterK.push_back(linked_nodes[s]);
//		}
//		
//		s = linked_nodes[s].next;
//	}
//}
//
//int SplitLinkedList(int argc, char* argv[])
//{
//	int start,N,K;
//	int add,d,next;
//	cin>>start>>N>>K;
//	for (int i = 0; i <N; ++i)
//	{
//		scanf("%d %d %d",&add,&d,&next);
//		linked_nodes[add].address=add;
//		linked_nodes[add].data=d;
//		linked_nodes[add].next=next;
//	}
//	
//	ListAccess(start,K);
//	int newStart;
//	bool isFindStart=false;
//	
//	if (!Vnegpart.empty())
//	{
//		isFindStart = true;
//		newStart =Vnegpart[0].address;
//		for (int i = 1; i < Vnegpart.size(); ++i)
//		{
//			
//			Vnegpart[i-1].next =Vnegpart[i].address;
//		}
//		Vnegpart[Vnegpart.size()-1].next=-1;
//	}
//	if (VlessK.empty())
//	{
//		
//	}
//	else if(!VlessK.empty())
//	{
//		if (isFindStart == false)
//		{
//			isFindStart = true;
//			newStart =VlessK[0].address;
//		}
//		else
//		{
//			Vnegpart[Vnegpart.size()-1].next = VlessK[0].address;
//		}		
//		for (int i = 1; i < VlessK.size(); ++i)
//		{			
//			VlessK[i-1].next =VlessK[i].address;
//		}
//		VlessK[VlessK.size()-1].next=-1;
//	}
//
//	if (VGreaterK.empty())
//	{
//		
//	}
//	else if(!VGreaterK.empty())
//	{
//		if (isFindStart == false)
//		{
//			//isFindStart = true;
//			newStart =VGreaterK[0].address;
//		}
//		else
//		{
//			VlessK[VlessK.size()-1].next = VGreaterK[0].address;
//		}		
//		for (int i = 1; i < VGreaterK.size(); ++i)
//		{			
//			VGreaterK[i-1].next =VGreaterK[i].address;
//		}
//		VGreaterK[VGreaterK.size()-1].next=-1;
//	}
//	vector<LinkedNode_> ans;
//
//	for (int i = 0; i < Vnegpart.size(); ++i)
//	{
//		//printf("%05d %d %05d\n",Vnegpart[i].address,
//			ans.push_back(Vnegpart[i]);
//	}
//	for (int i = 0; i < VlessK.size(); ++i)
//	{
//		//printf("%05d %d %05d\n",VlessK[i].address,
//			ans.push_back(VlessK[i]);
//	}
//	for (int i = 0; i < VGreaterK.size(); ++i)
//	{
//		//printf("%05d %d %05d\n",VGreaterK[i].address,
//			ans.push_back(VGreaterK[i]);
//	}
//	for (int i = 0; i < ans.size()-1; ++i)
//	{
//		printf("%05d %d %05d\n",ans[i].address,
//			ans[i].data,ans[i].next);
//	}
//	printf("%05d %d -1\n",ans[ans.size()-1].address,
//			ans[ans.size()-1].data);
//	return 0;
//}
