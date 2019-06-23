package com.uestc;

import java.util.Scanner;

public class ColorsMars {
    public static final int base = 13;
    public static final char[]  chars={'A','B','C'};
    public static String radix10toRadix13(int num1, int num2, int num3){
        int[] nums={num1,num2,num3};
        int[] ans=new int[6];
        int j=0;
        for (int i = 0; i <nums.length ; i++) {
            ans[j++]=nums[i]/ base;
            ans[j++]=nums[i]%base;
        }
        String sb="#";
        for (int i = 0; i <ans.length ; i++) {
            if (ans[i]>=10){
                sb += chars[ans[i]-10];
            }else{
                sb  += ans[i];
            }
        }
        return  sb;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n1,n2,n3;
        n1=scanner.nextInt();
        n2=scanner.nextInt();
        n3=scanner.nextInt();
        String ans;
        ans =radix10toRadix13(n1,n2,n3);
        System.out.print(ans);

    }

}
