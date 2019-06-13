package com.uestc;

import java.math.BigInteger;
import java.util.HashMap;
import java.util.Scanner;

public class Radix {

    public static long radix_10_Sum(String s,long radix){
        long ans=0;
        for (int i = 0; i <s.length() ; i++) {
            if (s.charAt(i) >= '0' && s.charAt(i) <= '9' ) {
                  ans = radix*ans+s.charAt(i)-'0';
            }
            else {
                ans = radix*ans+10+s.charAt(i)-'a';
            }
        }
        return  ans;
    }

    public static void main(String[] args) {
        Scanner scanner =new Scanner(System.in);
        String[] strings=new String[2];
        strings[0]=scanner.next();
        strings[1]=scanner.next();
        int tag;
        long radix;
        tag =scanner.nextInt();
        radix = scanner.nextInt();
        BigInteger g;

        long given,query;
        given = radix_10_Sum(strings[tag-1],radix);
        //2-tag 为另一个string的index
        char c='0';
        int minRadix=1;
        for (int i = 0; i <strings[2-tag].length() ; i++) {
            char c1 = strings[2 - tag].charAt(i);
            if (c1 >c) {
                c= c1;
            }
        }
        minRadix += c>='0'&&c<='9'?c-'0':10+c-'a';
        long minQuery;
        minQuery =radix_10_Sum(strings[2-tag],minRadix);
        if (minQuery == given) {
            if (minRadix ==1){
                System.out.print(2);
            }
            else{
                System.out.print(minRadix);

            }
           // return;
        }
        else if (minQuery > given){
            System.out.print("Impossible");
        }
        // Radix 可能超过36
        else {
            //int highBound = Integer.max(Math.toIntExact(given),minRadix)+1;
            //i是进制的遍历  ,最大不超过given  (10)1*given=given
            long low=minRadix+1;
            long upperbound=given;
            long ans=-1;
            while (low<=upperbound){
                long mid = (low+upperbound)/2;
                if (radix_10_Sum(strings[2-tag],mid) >given) {
                    upperbound= mid-1;
                }
                else if (radix_10_Sum(strings[2-tag],mid) < given) {
                    low = mid+1;
                }
                else {
                    ans=mid;
                    break;
                }
            }
//            for (i = minRadix+1; i <= given ; i++) {
//                if (radix_10_Sum(strings[2-tag],i) == given) {
//                    System.out.print(i);
//                    break;
//                }
//            }
            if (ans != -1) {
                System.out.print(ans);
            }
            else{
                System.out.print("Impossible");
            }
        }
    }
}
//    long  l1=radix_10_Sum(strings[2-tag],i+1000);
//                if( l1>0&& l1< given){
//        i=i+999;
//        continue;
//        }
//        else {
//        long l2=radix_10_Sum(strings[2-tag],i+100);
//        if(l2>0 && l2< given){
//        i=i+99;
//        continue;
//        }
//        }
//
//        long l3=radix_10_Sum(strings[2-tag],i+10);
//        if(l3>0 && l3< given){
//        i=i+9;
//        continue;
//        }