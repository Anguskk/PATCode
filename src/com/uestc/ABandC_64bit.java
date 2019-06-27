package com.uestc;

import java.math.BigInteger;
import java.util.Scanner;

public class ABandC_64bit {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T;
        T = scanner.nextInt();
        for (int i = 0; i <T ; i++) {
            BigInteger a,b,c;
            a = scanner.nextBigInteger();
            b = scanner.nextBigInteger();
            c = scanner.nextBigInteger();

            String ans = String.format("Case #%d: ",i+1);
            if (a.add(b).compareTo(c) > 0) {
                System.out.println(ans+"true");
            }
            else{
                System.out.println(ans+"false");
            }
        }
    }

}
