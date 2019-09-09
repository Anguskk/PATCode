//#include <iostream>
//#include <string>
//#include <queue>
//using namespace std;
//bool findParent[100]={false};
//struct t___________Node___
//{
//	int left;
//	int right;
//	t___________Node___()
//	{
//		left=-1;
//		right = -1;
//	}
//};
//t___________Node___  t____nn_______Node___[100];
//
//void LevelOrder(int parent,vector<int> &vLevel)
//{
//	queue<int> q;
//	q.push(parent);
//	while (!q.empty())
//	{
//		int temp=q.front();
//		vLevel.push_back(temp);
//		q.pop();
//		if (t____nn_______Node___[temp].left!= -1)
//		{
//			q.push(t____nn_______Node___[temp].left);
//		}
//		if (t____nn_______Node___[temp].right!= -1)
//		{
//			q.push(t____nn_______Node___[temp].right);
//		}
//	}
//}
//void In_Order(int parent , vector<int> &vInOder)
//{
//	if (t____nn_______Node___[parent].left != -1)
//	{		
//		In_Order(t____nn_______Node___[parent].left,vInOder);
//		//return;
//	}
//	//cout<<parent<<" ";
//	vInOder.push_back(parent);
//	if (t____nn_______Node___[parent].right != -1)
//	{
//		//parent = t____nn_______Node___[parent].right;
//		In_Order(t____nn_______Node___[parent].right,vInOder);
//		
//	}
//	return;
//
//}
//int InvertABinaryTree(int argc, char* argv[])
//{
//	int N;cin>>N;
//	getchar();
//	//string line="";
//	char left,right;
//	for (int i = 0; i < N; ++i)
//	{
//		scanf("%c %c",&right,&left);
//		getchar();
//		if (left == '-')
//		{
//			t____nn_______Node___[i].left = -1;
//		}
//		else
//		{
//			int index=left-'0';
//			t____nn_______Node___[i].left = index;
//			findParent[index] = true;
//		}
//		if (right =='-')
//		{
//			t____nn_______Node___[i].right = -1;
//		}
//		else
//		{
//			int index=right-'0';
//			t____nn_______Node___[i].right = index;
//			findParent[index] = true;
//		}
//	}
//	int parent=-1;
//	for (int i = 0; i < N; ++i)
//	{
//		if (findParent[i] == false )
//		{
//			parent = i;
//			break;
//		}
//	}
//	vector<int> vLEVEL;
//	vector<int> vINORDER;
//	In_Order(parent,vINORDER);
//	LevelOrder(parent,vLEVEL);
//	for (int i = 0; i < vLEVEL.size(); ++i)
//	{
//		if (i== vLEVEL.size()-1)
//		{
//			printf("%d\n",vLEVEL[i]);
//		}
//		else
//		{
//			printf("%d ",vLEVEL[i]);
//		}
//		
//	}
//	for (int i = 0; i < vINORDER.size(); ++i)
//	{
//		if (i== vINORDER.size()-1)
//		{
//			printf("%d\n",vINORDER[i]);
//		}
//		else
//		{
//			printf("%d ",vINORDER[i]);
//		}
//		
//	}
//	return 0;
//}
