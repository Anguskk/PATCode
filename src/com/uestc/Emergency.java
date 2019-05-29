package com.uestc;
import java.awt.*;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Emergency {
    private Node[] vNodes;
    private int[] distTo;
    private int[] rescueTeams;
    private int[] roads;
    private ArrayList<Edge>[] adjedges;
    //static int cnt=0;

    public Emergency(int V,int s){

        vNodes = new Node[V];
        distTo = new int[V];
        rescueTeams =new int[V];
        roads = new int[V];
        for (int i = 0; i <V ; i++) {
            roads[i] = 0;
        }
        roads[s] = 1;
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
        boolean isRelax;

        public void setRelax(boolean isrelax) {
            isRelax = isrelax;
        }

        public boolean isRelax() {
            return isRelax;
        }

        Edge(int s,int t,int w){
            this.n1=s;
            this.n2=t;
            this.Edgeweight= w;
            isRelax = false;
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
            roads[e.theOther(v1)] = roads [v1];
            rescueTeams[e.theOther(v1)] = rescueTeams[v1]+vNodes[e.theOther(v1)].nodeWeight;
        }
        else if (distTo[e.theOther(v1)] == distTo[v1]+e.Edgeweight){
            roads[e.theOther(v1)] += roads[v1];
            rescueTeams[e.theOther(v1)] = Math.max(rescueTeams[v1]+vNodes[e.theOther(v1)].nodeWeight,rescueTeams[e.theOther(v1)]);

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
        //数据读入完成
        //如果 c1->c1
        if (c1 == c2) {
            System.out.print(1+" "+my.getRescueTrams(c2));
        }
        else {
            Queue<Integer> queue = new LinkedList<Integer>();
            boolean[] isvisit=new boolean[n];
            queue.offer(c1);
            isvisit[c1]=true;
            while(!queue.isEmpty()){
                int num=queue.poll();
                for (Edge e:my.adj(num) ) {
                    if (!isvisit[e.theOther(num)]) {
                        queue.offer(e.theOther(num));
                        isvisit[e.theOther(num)]=true;
                    }

                }
                for (Edge e:my.adj(num)) {
                    if (!e.isRelax()){
                        my.relax(num,e);
                        e.setRelax(true);
                    }

                }
            }
            System.out.print(my.getRoads(c2)+" "+my.getRescueTrams(c2));


        }


    }
}