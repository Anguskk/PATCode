#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace  std;
#include <stack>
stack<int> vStack;
//int array[100005];
//Ê÷×´Êý×é£¬Awesome
int BIT[100005+1];
//int cntOfkey[100005];
// void buildBIT()
// {
// 	for (int i = 0; i < sizeof(array)/sizeof(int); ++i)
// 	{
// 		BIT[i+1] = array[i];
// 	}
// 	int lenth=sizeof(array)/sizeof(int)+1;
// 	for (int i = 1; i <lenth ; ++i)
// 	{
// 		int delta= i && (-i);
// 		int j = i+delta;
// 		if ( j<lenth)
// 		{
// 			BIT[j]  += BIT[i];			
// 		}
// 	}
// }
int lowBit(int x)
{
	return  x&(-x);
}
int query(int x)
{
	int sum = 0;
	for (int i = x; i >0 ; i = i-lowBit(i))
	{
		sum += BIT[i];
	}
	return  sum;
}
void update(int idex,int delta)
{
	//cntOfkey[idex] -=delta;
	
	for (int i = idex; i <=100000 ;i += lowBit(i))
	{				
		BIT[i]  += delta;		
	}
}
int BinarySearchAns(int median)
{
	int l=1,r=100000;
	while (l<r)
	{
		int mid=(l+r)/2;
		if (query(mid) <median)
		{
			l=mid+1;
		}
		else 
		{
			r=mid;
		}
		
	}
	return l;
}
int pointer=0;
int Index(){
	int index;
	if (vStack.size()%2==0)
	{
		index=vStack.size()/2;		
	}
	else
	{
		index=(vStack.size()+1)/2;
	}
	return index;
	// int sum=0;
	// for (int i = 1; i <= 100000  ; ++i)
	// {
	// 	if (cntOfkey[i]>0)
	// 	{
	// 		sum += cntOfkey[i];
	// 		if (sum >= index)
	// 		{
	// 			return  i;
	// 		}
	// 	}
	// }
	
}
int main(int argc, char* argv[])
{
	int n;cin>>n;getchar();
	char s[20];
	for (int i = 0; i < n; ++i)
	{		
		scanf("%s",s);
		int key;
		if (s[1] =='u')
		{
			cin>>key;
			vStack.push(key);
			//vStack.push_back(key);
			//cntOfkey[key]  +=1;
			update(key,1);
		}
		else if (s[1] == 'o')
		{
			if (vStack.size()>0)
			{
				//cntOfkey[vStack.top()]  -=1;
				//cntOfkey[vStack[vStack.size()-1]]  -=1;
				printf("%d\n",vStack.top());
				update(vStack.top(),-1);
				vStack.pop();
				//vStack.pop_back();
			}
			else
			{
				printf("Invalid\n");
			}
			
		}
		else if (s[1]== 'e')
		{
			if (vStack.size()>0)
			{
				if (vStack.size() == 1)
				{
					printf("%d\n",vStack.top());
				}
				else
				{
					printf("%d\n",BinarySearchAns(Index()));
				}
				
			}
			else
			{
				printf("Invalid\n");
			}
		}
		
		
	}
	return 0;
}
