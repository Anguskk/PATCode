#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace  std;

typedef  struct CS_Student
{
	int id;
	int grades[4];
	int rank[4];
	int best;
	
	//int index;
	
}CS_Student;
int  CScmp_flag=0;
bool cmp(const CS_Student &s1,const CS_Student &s2)
{
	return s1.grades[CScmp_flag]-s2.grades[CScmp_flag] > 0;
}
int isExist[1000005];
int getBestRank(CS_Student &s1 )
{
	int best=0;
	for (int i = 1; i < 4; ++i)
	{
		if (s1.rank[i] < s1.rank[best])
		{
			best = i;
		}
	}
	return best;
}

int TheBestRank(int argc, char* argv[])
{
	vector<CS_Student>  student;
	
	int N,M;
	cin>>N>>M;
	CS_Student tempStu;
	for (int i = 0; i < N; ++i)
	{
		
		scanf("%d %d %d %d",&tempStu.id,&tempStu.grades[1],&tempStu.grades[2],&tempStu.grades[3]);
		tempStu.grades[0] = floor((float)(tempStu.grades[1]+tempStu.grades[2]+tempStu.grades[3])/3.0+0.5);
		
		student.push_back(tempStu);
		
		
	}
	
	int times=4;
	for (int i = 0; i < times; ++i,++CScmp_flag)
	{
		sort(student.begin(),student.end(),cmp);
		student[0].rank[i] = 1;
		int tempRank = 1;
		for (int j = 1; j < student.size(); ++j)
		{
			tempRank = j+1;
			if (student[j].grades[i] == student[j-1].grades[i])
			{
				tempRank = student[j-1].rank[i];
			}
			student[j].rank[i] = tempRank; 
		}
	}
	for (int i = 0; i < student.size(); ++i)
	{
		isExist[student[i].id] = i+1;
		student[i].best = getBestRank(student[i]);
	}
	char chs[]={'A','C','M','E'};
	for (int i = 0; i<M; ++i)
	{
		int tempId;
		int Index;
		scanf("%d",&tempId);
		int temp=isExist[tempId];		
		if (temp == 0 )
		{
			printf("N/A\n");			
		}
		else
		{
			Index = isExist[tempId]-1;
			//temp= getBestRank(student[Index]);
			printf("%d %c\n",student[Index].rank[student[Index].best],chs[student[Index].best]);	
		}
		
	}
	return 0;
}
