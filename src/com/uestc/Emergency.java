package com.uestc;
import java.awt.*;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Emergency {
    public  boolean[] Onqueue;
    public  Queue<Integer> queue;
    private Node[] vNodes;
    private int[] distTo;
    private int[] rescueTeams;
    private int[] roads;
    //Arraylist建一个bag存放所有前继点
    //private int[] pathTo;
    private ArrayList<Integer>[]  pathToBag;
    private ArrayList<Edge>[] adjedges;
    //static int cnt=0;

    public Emergency(int V,int s){

        vNodes = new Node[V];
        distTo = new int[V];
        rescueTeams =new int[V];
        roads = new int[V];
        roads[s] = 1;
        queue = new LinkedList<Integer>();
        Onqueue = new boolean[V];
        //pathTo 记录到这个点的路径上前一个点
       // pathTo = new int[V];
//        for (int i = 0; i <V ; i++) {
//            pathTo[i] = -1;
//        }
//        pathTo[s] = s;
        //路径背包存放所有前继点
        pathToBag = (ArrayList<Integer>[]) new ArrayList[V];
        for (int i = 0; i <V ; i++) {
            pathToBag[i] = new ArrayList<Integer>(V);
        }
        for (int i = 0; i <V ; i++) {
            distTo[i] = Integer.MAX_VALUE;

        }
        distTo[s] =0 ;
        adjedges = (ArrayList<Edge>[]) new ArrayList[V];
        for (int i = 0; i <V ; i++) {
            adjedges[i] =new ArrayList<Edge>();
        }
    }
    public void setNodesweight(int[] tNW){
        for (int i = 0; i <vNodes.length ; i++) {
            int w=tNW[i];
            vNodes[i] = new Node(i,w);
            rescueTeams[i]=w;
        }

    }
    public Iterable<Edge> adj(int v) {

        return adjedges[v];
    }

    private  class Node{
        int _No;
        int nodeWeight;
        Node(int No,int w){
            this._No=No;
            this.nodeWeight=w;
        }
    }
    public void setEdge(int s,int t,int w){
        Edge edge=new Edge(s,t,w);
        adjedges[s].add(edge);
        adjedges[t].add(edge);

    }
    private class Edge{
        int Edgeweight;
        int n1;
        int n2;

        Edge(int s,int t,int w){
            this.n1=s;
            this.n2=t;
            this.Edgeweight= w;

        }
        int theOther(int temp){
            if (temp == n1) {
                return n2;
            }else
                return n1;
        }

    }
    public void relax(int v1,Edge e){
        if (distTo[e.theOther(v1)] > distTo[v1]+e.Edgeweight) {
            distTo[e.theOther(v1)] = distTo[v1]+e.Edgeweight;
        if (pathToBag[e.theOther(v1)].size()==0){
            pathToBag[e.theOther(v1)].add(v1);
            }
        else{
            pathToBag[e.theOther(v1)].clear();
            pathToBag[e.theOther(v1)].add(v1);
        }
        if (Onqueue[e.theOther(v1)] == false) {
            queue.offer(e.theOther(v1));
            Onqueue[e.theOther(v1)] = true;
        }
        roads[e.theOther(v1)] = roads [v1];
        rescueTeams[e.theOther(v1)] = rescueTeams[v1]+vNodes[e.theOther(v1)].nodeWeight;
        }
        else if (distTo[e.theOther(v1)] == distTo[v1]+e.Edgeweight){
            if (Onqueue[e.theOther(v1)] == false) {
                queue.offer(e.theOther(v1));
                Onqueue[e.theOther(v1)] = true;
            }
            if (!pathToBag[e.theOther(v1)].contains(v1)) {
                pathToBag[e.theOther(v1)].add(v1);
            }

            //pathTo[e.theOther(v1)] = v1;
            rescueTeams[e.theOther(v1)] = Math.max(rescueTeams[v1]+vNodes[e.theOther(v1)].nodeWeight,rescueTeams[e.theOther(v1)]);
            int cnt =0;
            for (int i = 0; i <pathToBag[e.theOther(v1)].size() ; i++) {
                cnt += roads[pathToBag[e.theOther(v1)].get(i)];
            }
            roads[e.theOther(v1)] =cnt;
//            }else{
////                roads[e.theOther(v1)] += roads[v1];
////                pathTo[e.theOther(v1)] = v1;
////                for (int i = 0; i <vNodes.length; i++) {
////                    if (pathTo[i] == e.theOther(v1)) roads[i] +=  roads[v1];
//                }


        }

    }
    public int getRoads(int i) {
        return roads[i];
    }

    public int getRescueTrams(int v){
        return rescueTeams[v];
    }

    public static void main(String[] args){
        int n,m,c1,c2;
        Scanner scanner = new Scanner(System.in);
        n= scanner.nextInt();
        m= scanner.nextInt();
        c1= scanner.nextInt();
        c2= scanner.nextInt();
        int[] Nw= new int[n];
        for (int i = 0; i <n; i++) {
            Nw[i]= scanner.nextInt();
        }
        Emergency my=new Emergency(n,c1);
        my.setNodesweight(Nw);
        int start,to,weight;
        for (int i = 0; i <m ; i++) {
            start= scanner.nextInt();
            to= scanner.nextInt();
            weight= scanner.nextInt();
            my.setEdge(start,to,weight);
        }
//        数据读入完成
//        如果 c1->c1
        if (c1 == c2) {
            System.out.print(1+" "+my.getRescueTrams(c2));
        }
        else {
            //Queue<Integer> queue = new LinkedList<Integer>();
            //boolean[] isvisit=new boolean[n];
            my.queue.offer(c1);
            my.Onqueue[c1] = true;
            //isvisit[c1]=true;
            while(!my.queue.isEmpty()){
                int num=my.queue.poll();
                my.Onqueue[num] = false;

                for (Edge e:my.adj(num)) {
                        my.relax(num,e);
                }
            }

            System.out.print(my.getRoads(c2)+" "+my.getRescueTrams(c2));



        }


    }
}
