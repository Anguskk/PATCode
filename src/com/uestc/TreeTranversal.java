package com.uestc;

import java.util.LinkedList;
import java.util.Scanner;

public class TreeTranversal {
    public static class Tree{
            Tree left;
            Tree right;
            int key;
            int element;
        Tree(int key,int num){
            this.key = key;
            this.element = num;
            this.left = null;
            this.right = null;
        }
        Tree(int key){
            this.key = key;
            this.element = 0;
            this.left = null;
            this.right = null;
        }
        void print(){
            System.out.println(key+":"+element);
        }
    }
    static void  postOrder(Tree root){
        if (null != root.left) {
            postOrder(root.left);
        }
        if (null != root.right){
            postOrder(root.right);
        }
        root.print();
    }
    static void  inOrder(Tree root){
        if (null != root.left) {
            inOrder(root.left);
        }
        root.print();
        if (null != root.right){
            inOrder(root.right);
        }
    }
    static void levelTranverse(Tree tree){
        boolean flag=true;
        LinkedList<Tree> q = new LinkedList();
        q.add(tree);

        while(!q.isEmpty()){
            Tree node = q.poll();
            if (flag==true){
                System.out.print(node.key);
                flag= false;
            }
            else {
                System.out.print(" "+node.key);
            }
            if (node.left !=null) q.add(node.left);
            if (node.right != null) q.add(node.right);
        }
    }
    static Tree constructTree(int[] inOder,int[] postOrder){
        return constructTree(inOder,0,inOder.length-1,postOrder,0,postOrder.length-1);
    }
    static Tree constructTree(int[] inOrder,int inStart,int inEnd,int[] postOrder ,int postStart,int postEnd){
        if (inStart>inEnd || postStart>postEnd) return null;
        int root=postOrder[postEnd];
        Tree tree = new Tree(root);
        for (int i = inStart; i <=inEnd ; i++) {
            if (inOrder[i] == root) {
                tree.left =constructTree(inOrder,inStart,i-1,postOrder,postStart,postStart-inStart+i-1);
                tree.right = constructTree(inOrder,i+1,inEnd,postOrder,postStart-inStart+i,postEnd-1);
            }
        }
        return  tree;
    }

    public static void main(String[] args) {
   //    Tree tree = new Tree(1,5);
//        tree.left = new Tree();
        int N;
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        int[] post = new int[N];
        int[] in = new int[N];
        for (int i = 0; i < post.length; i++) {
            post[i] = scanner.nextInt();

        }
        for (int i = 0; i < in.length; i++) {
            in[i] = scanner.nextInt();
        }
        Tree BinaryTree =constructTree(in,post);
        levelTranverse(BinaryTree);
    }
}
