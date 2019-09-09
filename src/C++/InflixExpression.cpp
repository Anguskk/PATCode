#include <iostream>
#include <string>
using namespace  std;
int P;
struct Node______
{
	int left;
	int right;
	string data;
	bool isLeaf;
	int isLeftOrRight;
};
Node______  nodes_______n_______[50];

void  InflixOrder(int parent,string &s)
{
	if (nodes_______n_______[parent].isLeaf == false && parent !=P )
	{
		s.push_back('(');
	}
	if (nodes_______n_______[parent].left != -1)
	{
		InflixOrder(nodes_______n_______[parent].left,s);		
	}
	// else 	
	// {
	// 	if (nodes_______n_______[parent].isLeaf == true)
	// 	{
	// 		if (nodes_______n_______[parent].isLeftOrRight == -1)
	// 		{
	// 			
	// 		}
	// 	}
	// 	else
	// 	{
	// 		s.push_back('(');
	// 	}
	// 	
	// }
	s.append(nodes_______n_______[parent].data);
	
	if (nodes_______n_______[parent].right != -1)
	{
		InflixOrder(nodes_______n_______[parent].right,s);
				
	}
	if (nodes_______n_______[parent].isLeaf == false && parent !=P)
		{
		  s.push_back(')');
			
		}
	// else 	
	// {
	// 	if (nodes_______n_______[parent].isLeaf == true)
	// 	{
	// 		if (nodes_______n_______[parent].isLeftOrRight == 1)
	// 		{
	// 			s.push_back(')');
	// 		}
	// 	}
	// 	else
	// 	{
	// 		s.push_back(')');
	// 	}
	// 	
	// }

}
int InflixExpression(int argc, char* argv[])
{
	bool isRoot[50]={false};
	int N;cin>>N;
	string str;
	int l,r;
	for (int i = 1; i <=N; ++i)
	{
		cin>>str>>l>>r;
		isRoot[l] = true;
		isRoot[r] = true;
		nodes_______n_______[i].data = str;
		nodes_______n_______[i].left = l;
		nodes_______n_______[i].right = r;
		nodes_______n_______[l].isLeftOrRight=-1;
		nodes_______n_______[r].isLeftOrRight = 1;
		if (l== -1 && r==-1)
		{
			nodes_______n_______[i].isLeaf =true;
		}
	}
	//int parent=0;
	for (int i = 1; i <=N; ++i)
	{
		if (isRoot[i] == false)
		{
			P = i;
			break;
		}
	}
	string ans="";
	InflixOrder(P,ans);
	//ans +=')';
	printf("%s",ans.c_str());
	return 0;
}
