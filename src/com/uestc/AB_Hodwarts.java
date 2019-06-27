package com.uestc;

import java.util.Scanner;

public class AB_Hodwarts {
    public static final int Galleon = 10000001;
    public static final int Sickle = 17;
    public static final int Knut = 29;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s1,s2;
        s1 = scanner.next();
        s2 = scanner.next();
        String[] nums1 =  s1.split("\\.");
        String[] nums2 =  s2.split("\\.");
        int[] ints_1 = new int[3];
        int[] ints_2 = new int[3];
        for (int i = 0; i <3 ; i++) {
            ints_1[i] = Integer.parseInt(nums1[i]);
            ints_2[i] = Integer.parseInt(nums2[i]);
        }
        int[] ans = new int[3];
        int carry=0;
        int[] radix = {Galleon,Sickle,Knut};
        for (int i = 2; i >=1; i--) {
            ans[i] =  (ints_1[i] + ints_2[i] +carry)%radix[i];
            carry = (ints_1[i] + ints_2[i] )/radix[i];
        }
        ans[0] =  ints_1[0] + ints_2[0] +carry;
        System.out.print(ans[0]+"."+ans[1]+"."+ans[2]);
    }
}
