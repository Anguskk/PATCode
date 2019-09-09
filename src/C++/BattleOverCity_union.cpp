//
// Created by AngusKF on 2019/7/12.
// 连通集Union
//有问题
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

struct Battele_node{
    //int id;
   // int degree;
    int parent;
    vector<int> adjPoint;
};
vector<Battele_node> battleNodes;
vector<int> szOfUnion;
int cnt_ofUnion_Set ;
static int findRoot (int i) {
    while (battleNodes[i].parent != i) {
        i = battleNodes[i].parent;
    }
    return i;
}
static bool isConnect(int i,int j){
    return findRoot(i) == findRoot(j);
}
static void   _Union(int i,int j){
    int p = findRoot(i);
    int q = findRoot(j);
    if(p == q) return;
    if (szOfUnion[p] < szOfUnion[q]) {
        battleNodes[p].parent = q;
        szOfUnion[q] += szOfUnion[p];
    } else{
        battleNodes[q].parent = p;
        szOfUnion[p] += szOfUnion[q];
    }
    cnt_ofUnion_Set -= 1;
}

int BattleOverCity(){
    int N,M,K;
    cin>>N>>M>>K;
    battleNodes.resize(N+1);
    szOfUnion.resize(N+1);
    cnt_ofUnion_Set = N;
    //初始化父节点
    for (int li = 1; li <N+1 ; ++li) {
        battleNodes[li].parent = li ;
    }
    for (int i = 0; i <M ; ++i) {
        int c1,c2;
        scanf("%d %d",&c1,&c2);
        _Union(c1,c2);
        battleNodes[c1].adjPoint.push_back(c2);
        battleNodes[c2].adjPoint.push_back(c1);

    }
    vector<int> query;
    for (int j = 0; j <K ; ++j) {
        int city;
        scanf("%d",&city);
        query.push_back(city);

    }
    for (int k = 0; k <K ; ++k) {
        int tempCity = query[k];
        int ans=0;
        //int adjCity = battleNodes[tempCity].adjPoint[0];
        vector<int>::iterator  adjCity=battleNodes[tempCity].adjPoint.begin();
        for (   ; adjCity!= battleNodes[tempCity].adjPoint.end(); ++adjCity) {
            if(battleNodes[*(adjCity)].parent == tempCity){
                ans += 1;
            }
        }
        printf("%d\n",ans-1);
    }


    return 0;
}

