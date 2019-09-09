#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace  std;
vector<int> vecInt;
bool isLeaf(int num)
{
	if (num*2+1>vecInt.size() && num*2+2>vecInt.size())
	{
		return true;
	}
	else { return false; }
}
void DfsInBinaryTree(int parent,deque<int> &myque)
{
	myque.push_back(vecInt[parent]);
	if (parent*2+2< vecInt.size())
	{
		DfsInBinaryTree(parent*2+2,myque);
	}
	if (parent*2+1< vecInt.size())
	{
		DfsInBinaryTree(parent*2+1,myque);
	}
	int size=myque.size();
	if (isLeaf(parent))
	{
		deque<int>::iterator it=myque.begin();
		
		for (it;it!=myque.end();++it)
		{	
			
			cout<<*it;
			
			if (it!=myque.end()-1)
			{
				cout<<" ";				
			}		
		}
		cout<<endl;
		myque.pop_back();
	}
	else
	{
		myque.pop_back();
	}
}

int HeapPath(int argc, char* argv[])
{	
	int n;
	cin>>n;
			
	vecInt.clear();		
	for (int j = 0; j < n; ++j)
	{
		int temp;
		scanf("%d",&temp);
		vecInt.push_back(temp);
	}
	deque<int> mydeque;
	DfsInBinaryTree(0,mydeque);
		bool comp = vecInt[0]>=vecInt[1];
		bool flag =true;
		for (int i = 0; i<n/2; ++i)
		{ 
			if (comp!=vecInt[i]>=vecInt[2*i+1] )
			{
				flag =false;
				break;
			}
			if (2*i+2<vecInt.size())
			{
				if (comp!=vecInt[i]>=vecInt[2*i+2] )
				{
					flag =false;
					break;
				}
			}
		}
		

		if (false ==flag)
		{
			cout<<"Not Heap"<<endl;
		}
		else if (comp == true)
		{
			cout<<"Max Heap"<<endl;
		}
		else { cout<<"Min Heap"<<endl; }	
		
		


	return 0;
}
/**
 *   v[1]--v[N]
 *    for(i=2;i<=N;i++){
 *		if(v[i/2] > v[i]  )  
 *    
 *    }
 */