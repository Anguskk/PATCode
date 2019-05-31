package com.uestc;

import java.util.Scanner;

public class HelloWorldForU {


    public static void main(String[] args){
        String str="";
        Scanner scanner = new Scanner(System.in);

        if (scanner.hasNextLine()){
            str= scanner.nextLine();
        }
        int horizon,vertial;
        int len = str.length();
        horizon = len ;
        vertial = 1;
        while (true){
            int nextVer = vertial+1;
            int nextHor = len+2-2*(vertial+1);
            if (nextVer <= nextHor && nextHor>=3){
                vertial +=1;
                horizon = len+2-2*vertial;
            }
            if (vertial== horizon || vertial+1 == horizon ||vertial+2 == horizon) break;
        }
        int cntSpace=horizon-2;
        int pointer=0;
        for (int i = 0; i <vertial-1 ; i++) {
            System.out.print(str.charAt(i));
            for (int j = 0; j <cntSpace ; j++) {
                System.out.print(" ");
            }
            System.out.print(str.charAt(len-1-i));
            System.out.println();
        }
        System.out.print(str.substring(vertial-1,vertial-1+horizon));
    }
}
