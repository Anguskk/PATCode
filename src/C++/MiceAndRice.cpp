#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace  std;
struct mice
{
	int index,weight,rank;

};
int cntRank[1001];
mice Mouses[1005];
queue<int> players;
vector<int> promoted;
int MiceAndRice(int argc, char* argv[])
{
	int N,G;cin>>N>>G;
	bool isWinner=false;
	//players.resize(N+1);
	cntRank[0] = N;
	for (int i = 0; i <N; ++i)
	{
		scanf("%d",&Mouses[i].weight);
		Mouses[i].index = i;
	}
	for (int i = 1; i <= N; ++i)
	{
		int player;
		scanf("%d",&player);
		players.push(player);
	}
	int winnerRecord;
	while (!isWinner)
	{
		int n=players.size();
		for (int i = 0; i < ceil(n*1.0/G); ++i)
		{
			int cnt=1,maxIndex=players.front();
			for (int j = 0; j <G && !players.empty() ; ++j)
			{
				
				if (Mouses[maxIndex].weight < Mouses[players.front()].weight)
				{
					maxIndex = players.front();
					
				}
				players.pop();
			}
			Mouses[maxIndex].rank +=1;
			cntRank[Mouses[maxIndex].rank] +=1;
			cntRank[Mouses[maxIndex].rank-1] -=1;
			promoted.push_back(maxIndex);
		}
		if (promoted.size() == 1)
		{
			isWinner = true;
			winnerRecord = Mouses[promoted[0]].rank;
		}
		for (int i = 0; i < promoted.size(); ++i)
		{
			players.push(promoted[i]);
		}
		promoted.clear();		
	}
	map<int,int> Record;
	int cntR=1;
	Record[winnerRecord] = 1;
	for (int i =winnerRecord-1; i >=0 ; --i)
	{
		Record[i] = cntR+1;
		cntR += cntRank[i];
	}
	for (int i = 0; i < N; ++i)
	{
		if (i==0)
		{
			printf("%d",Record[Mouses[i].rank]);
		}
		else 
		printf(" %d",Record[Mouses[i].rank]);
	}
	return 0;
}

