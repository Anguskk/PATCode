#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <utility>
#include <functional>
using namespace  std;
struct _LinkedNode
{
	int address,next;
	char data;
};
_LinkedNode linked_node[100001];

int sharing(int argc, char* argv[])
{
	bool isInlinked[100001];
	int s1,s2,N;
	cin>>s1>>s2>>N;
	int add,d,next;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d %c %d",&add,&d,&next);
		linked_node[add].address=add;
		linked_node[add].data=d;
		linked_node[add].next=next;
	}
	for (int p = s1; p != -1 ; p = linked_node[p].next)
	{
		isInlinked[p] = true;
	}
	int common=-1;
	for (int p = s2; p != -1 ; p = linked_node[p].next)
	{
		if (isInlinked[p] == true)
		{
			common = p;
			break;
		}
		
	}
	if (common == -1)
	{
		printf("-1\n");
	}
	else
	{
		printf("%05d\n",common);
	}
	

	return 0;
}