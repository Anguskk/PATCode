#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;
int a[5010], b[5010];

/**
 * \���
 *  bfs  ��   dfs  ˳��  ����ȷ��Ψһ��ͼ�ı߽ṹ
 *  ��򵥷���
 *  BFS����V,DFS����U
 *  ��BFS  ˳����s��Vi�мӱ�
 *  DFS�� �� Vi �� V (i+1)  �ӱ�
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