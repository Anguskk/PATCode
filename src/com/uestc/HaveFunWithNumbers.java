package com.uestc;

import java.math.BigInteger;
import java.util.Scanner;

public class HaveFunWithNumbers {
    public static int[] cnt_1 = new int[10];
    public static int[] cnt_2 = new int[10];
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BigInteger num = scanner.nextBigInteger();
        String s1 = String.valueOf(num);
        //BigInteger  n3 =num.shiftLeft(1);
        BigInteger  num_2 = num.shiftLeft(1);
        String s2 = String.valueOf(num_2);
//        int n1 =num.bitCount();
//        int n2 =num.bitLength();
//        //num.byteValueExact();
//        BigInteger n3 = num.flipBit(12);
//        boolean is =num.isProbablePrime(90);
//        byte[]   bytes =num.toByteArray();

        if (s1.length() != s2.length()) {
            System.out.print("No");
            return;
        }
        for (int i = 0; i <s1.length() ; i++) {
            cnt_1[s1.charAt(i)-'0']++;
            cnt_2[s2.charAt(i)-'0']++;
        }
        for (int i = 0; i <10 ; i++) {
            if (cnt_1[i] != cnt_2[i]) {
                System.out.print("No");
                return;
            }
        }
        System.out.println("Yes");
        System.out.print(num_2);
    }
}
