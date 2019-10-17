#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;
int a[5010], b[5010];

/**
 * \多解
 *  bfs  和   dfs  顺序  不能确定唯一的图的边结构
 *  最简单方法
 *  BFS集合V,DFS集合U
 *  在BFS  顺序：在s和Vi中加边
 *  DFS： 在 Vi 和 V (i+1)  加边
 * \return 
 */
int Bfs_Dfs()
{
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (i = 1; i <= n; i++) scanf("%d", &b[i]);
	if (n > 1 && a[2] != b[2])
	{
		printf("-1\n");
		return 0;
	}
	printf("%d\n", 2 * n - 3);
	for (i = 1; i < n; i++) printf("%d %d\n", b[i], b[i + 1]);
	for (i = 3; i <= n; i++) printf("1 %d\n", a[i]);
	return 0;
}