package com.uestc;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

//FindCoins
//TwoSum

public class FindCoin{

    static int compare(Integer o1, Integer o2){
        return  o1-o2;
    };
    public static void main(String[] args) {
        int N,M;
        Scanner scanner = new Scanner(System.in);
        N= scanner.nextInt();
        M= scanner.nextInt();
        int[] integers = new int[N];
        for (int i = 0; i < N; i++) {
            integers[i] =scanner.nextInt();
        }
        Arrays.sort(integers);
//        integers.sort(new Comparator<Integer>() {
//            @Override
//            public int compare(Integer o1, Integer o2) {
//                return o1-o2;
//            }
//        });
        for (int i = 0; i < integers.length-1; i++) {
            if (i>=1){
                int previus = integers[i-1];
                if (previus == integers[i]) continue;
            }

            int obj = M-integers[i];
            int ans = Arrays.binarySearch(integers,i+1,integers.length-1,obj);
            if (ans < 0) {
                continue;
            }
            else{
                System.out.println((M-integers[ans])+" "+integers[ans] );
                return;
            }
        }
        System.out.println("No Solution");
    }
}
