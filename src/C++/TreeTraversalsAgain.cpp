#include <iostream>
#include <vector>
#include <memory.h>
using namespace  std;
//数组开大
int mytree[1000001];
bool marked[1000001];
void PostOrder(int root,vector<int> &v,int N)
{	
	if (mytree[root*2] !=0 )
	{
		PostOrder(root*2,v,N);
	}
	if (mytree[root*2+1] !=0 )
	{
		PostOrder(root*2+1,v,N);
	}
	v.push_back(mytree[root]);
}
void RecursiveCons(int parent)
{
	
}
int TreeTranverseAgain(int argc, char* argv[])
{
	memset(mytree,0,sizeof(mytree)/sizeof(int));
	int n;cin>>n;getchar();
	int ele,parent=1;

	for (int i = 0; i < 2*n; ++i)
	{		
		//int ele;
		char str[10];
		scanf("%s",str);
		if (str[1] == 'u')
		{			
			scanf("%d",&ele);
			if (mytree[parent] ==0)
			{
				mytree[parent] = ele;			
				
			}
			else
			{
				parent = parent*2+1;
				mytree[parent] = ele;				
			}
			parent = parent*2;
			// if ( mytree[parent*2] ==0)
			// {
			// 	parent = parent*2;
			// 	
			// }
			// else if (mytree[parent*2+1] == 0)
			// {
			// 	parent = parent*2+1;
			// }
		}
		else
		{
			parent = parent/2;
			while (marked[parent] )
			{
				parent=parent/2;
			}
			marked[parent] = true;
		}
	}
	vector<int> post;
	PostOrder(1,post,n);
	for (int i = 0; i < post.size(); ++i)
	{
		if (i==0)
		{
			printf("%d",post[i]);
		}
		else 
		printf(" %d",post[i]);
	}
	return 0;
}
