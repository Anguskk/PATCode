package com.uestc;

import java.util.HashMap;
import java.util.Scanner;

public class Radix {
//    public static HashMap<Character, Integer> charvalue = new HashMap<Character, Integer>();
//    public void createMap(){
//        charvalue.put('0',0);
//        charvalue.put('1',1);
//    }
    public static long radix_10_Sum(String s,int radix){
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
        int tag,radix;
        tag =scanner.nextInt();
        radix = scanner.nextInt();
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
        else {
            int i;
            for (i = minRadix+1; i <= 36 ; i++) {
                if (radix_10_Sum(strings[2-tag],i) == given) {
                    System.out.print(i);
                    break;
                }
            }
            if (i == 37) {
                System.out.print("Impossible");
            }
        }
    }
}
