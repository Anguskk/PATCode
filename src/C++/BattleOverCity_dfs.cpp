//dfs 找出删除一个后的连通分量数
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstdlib>
using namespace std;
#define maxnn 1001

//邻接矩阵
int battle_edge[maxnn][maxnn];
int battle_visited[maxnn];
int battle_query[maxnn];
void battle_dfs(int N,int s)
{
	battle_visited[s] = 1;
	int i;
	for ( i = 1; i <= N; ++i)
	{
		if (battle_visited[i] == 0 && battle_edge[i][s] ==1)
		{
			battle_dfs(N,i);
		}	
	}
	
}

int BattleOverCIty_dfs(){
    int N,M,K;
    cin>>N>>M>>K;    
    
    for (int i = 0; i <M ; ++i) {
        int c1,c2;
        scanf("%d %d",&c1,&c2);
		battle_edge[c1][c2] = 1;
		battle_edge[c2][c1] = 1;
    }
    int temp,cnt;
    for (int i = 0; i < K; ++i)
    {
		cnt = 0;
	    scanf("%d",&temp);
		memset(battle_visited,0,sizeof(battle_visited));
    	battle_visited[temp] = -1;
	    for (int j_i = 1; j_i <=N; ++j_i)
	    {
		    if (battle_visited[j_i] == 0)
		    {
			    battle_dfs(N,j_i);
				cnt++;
		    }
	    }
		 printf("%d\n",cnt-1);
    }
    
    
	system("pause");
    return 0;
}

