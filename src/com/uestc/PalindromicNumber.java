package com.uestc;

import java.util.Scanner;

public class PalindromicNumber {
    public static boolean isPalindromic(String s){
        boolean ans = false;
        int len=s.length();
        if (len == 1 || len==0) {
            return true;
        }
        int i,j;
        for (i = 0,j=len-1; i <j ; i++,j--) {
            if (s.charAt(i) != s.charAt(j)) {
                return false;
            }
        }
        if(i >= j) ans=true;
        return ans;
    }
    //大数字符串加法
    public static String PlusRerverse(String s){
//        StringBuilder sb = new StringBuilder(s);
//        StringBuilder reverse=sb.reverse();
        String ans = "";
        char[] sum=new char[s.length()];
        int carry=0;
        int mod;
        int len=s.length();
        for (int i = len-1 ; i >=0 ; i--) {
            int temp =s.charAt(i)-'0'+ s.charAt(len-1-i)-'0'+carry;
            mod= temp%10;
            carry = temp/10;
            sum[i] = (char) ('0'+mod);
        }

        if (carry==0) ans = String.valueOf(sum);
        else if (carry==1) ans =1+String.valueOf(sum);

        //long num=Integer.parseInt(s);
        return ans;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String num;
        int step;
        String s1;

        num = scanner.next();
        step = scanner.nextInt();
        int i;
        for (i = 0; i <step ; i++) {
            if ( isPalindromic(num)) {

                break;
            }
            else num=PlusRerverse(num);
        }
        System.out.printf(num+"\n"+i);
    }
}
//        long reverse=0;
//        long sum=0;
//        for (int i = s.length()-1; i >=0 ; i--) {
//            reverse =(s.charAt(i)-'0')+10*reverse;
//        }
//        sum = num+reverse;
//        //线性操作？耗时
//        ans=String.valueOf(sum);
