#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace  std;
int binarySearch(vector<int> &vec , int left,int right,int val)
{
	while (left<=right)
	{
	  int mid = (left+right)/2;
	  if (vec[mid]>val)
	  {
		  right=mid-1;
	  }
	  else if (vec[mid] <val)
	  {
		  left = mid+1;
	  }
	  else { return mid; }
	}
}

int  quick_sort_pivot(int argc, char* argv[])
{
	vector<int> vecOrigi;
	vector<int> vecSort;
	vector<int> result;
	int N;
	cin>>N;
	int tempNum;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&tempNum);
		vecOrigi.push_back(tempNum);
	}
	vecSort.assign(begin(vecOrigi),end(vecOrigi));
	sort(vecSort.begin(),vecSort.end());
	int max=0;
	for (int i = 0; i < vecOrigi.size(); ++i)
	{
		if (vecOrigi[i]  == vecSort[i]  && vecOrigi[i]>max)
		{
			result.push_back(vecOrigi[i]);
		}
		if (vecOrigi[i]>max)
		{
			max = vecOrigi[i];
		}		
	}
	sort(result.begin(),result.end());
	if (result.size()==0)
	{
		cout<<"0"<<endl<<endl;	
	}
	else {
		cout<<result.size()<<endl;
		cout<<result[0];
		for (int i = 1; i < result.size(); ++i)
		{
			cout<<" "<<result[i];
		}
	}	
	return 0;
}
/*

		if (offset == i )
		{			
			if (offset<N/2)
			{
				int checksum1=0,checksum2=0;
				for (int i_1 = 0; i_1 < offset; ++i_1)
				{
					checksum1 += vecSort[i_1];
				}
				for (int i_2 = 0; i_2 < offset; ++i_2)
				{
					checksum2 += vecOrigi[i_2];
				}
				if (checksum1 == checksum2)
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
			else
			{
				int checksum1=0,checksum2=0;
				for (int i_1 = offset+1; i_1 < N; ++i_1)
				{
					checksum1 += vecSort[i_1];
				}
				for (int i_2 = offset+1; i_2 < N; ++i_2)
				{
					checksum2 += vecOrigi[i_2];
				}
				if (checksum1 == checksum2)
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}				
		}
		else if (offset==N-1-i)
		{
			if (offset<N/2)
			{
				int checksum1=0,checksum2=0;
				for (int i_1 = 0; i_1 < offset; ++i_1)
				{
					checksum1 += vecSort[i_1];
				}
				for (int i_2 = offset+1; i_2 < N; ++i_2)
				{
					checksum2 += vecOrigi[i_2];
				}
				if (checksum1 == checksum2)
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
			else
			{
				int checksum1=0,checksum2=0;
				for (int i_1 = offset+1; i_1 < N; ++i_1)
				{
					checksum1 += vecSort[i_1];
				}
				for (int i_2 = 0; i_2 < offset; ++i_2)
				{
					checksum2 += vecOrigi[i_2];
				}
				if (checksum1 == checksum2)
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
		}*/

/*
if (vecSort[i] != vecOrigi[i] && vecSort[N-1-i] != vecOrigi[i])
		{
			continue;
		}
		if (i==0 || i==N-1)
		{
			result.push_back(pair<int,int>(vecOrigi[i],i));
		}
		else if (i==1 )
		{
			int offset=binarySearch(vecSort,0,N-1,vecOrigi[i]);
			if (offset<N/2)
			{
				if (vecSort[0] == vecOrigi[0])
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
			else {
				if (vecSort[N-1] == vecOrigi[0])
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				} 
			}
		}
		else if(i==N-2)
		{
			int offset=binarySearch(vecSort,0,N-1,vecOrigi[i]);
			if (offset<N/2)
			{
				if (vecSort[0] == vecOrigi[N-1])
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
			else {
				if (vecSort[N-1] == vecOrigi[N-1])
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				} 
			}
		}
		else
		{
			if (i<N/2)
			{
				bool flag=vecOrigi[0]>vecOrigi[i];
				int j=1;
				for (j ; j < i; ++j)
				{
					if (flag!=(vecOrigi[j]>vecOrigi[i]))
					{
						break;
					}
				}
				if (j==i)
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
			else
			{
				bool flag=vecOrigi[i+1]>vecOrigi[i];
				int j=i+1;
				for (j ; j < N; ++j)
				{
					if (flag!=(vecOrigi[j]>vecOrigi[i]))
					{
						break;
					}
				}
				if (j==N)
				{
					result.push_back(pair<int,int>(vecOrigi[i],i));
				}
			}
		}		
*/