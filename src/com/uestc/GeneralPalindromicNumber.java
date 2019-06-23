package com.uestc;

import java.util.ArrayList;
import java.util.Scanner;

public class GeneralPalindromicNumber {
    public static ArrayList<Integer> radixTrans(int num, int base){
        ArrayList<Integer> transNum=new ArrayList<>();
        while(num != 0){
            transNum.add(num%base);
            num = num / base;
        }
        return  transNum;
    }
    public static boolean isPalindromic(ArrayList<Integer> arrynum){
        for (int i = 0,j=arrynum.size()-1; i<j ; i++,j--) {
            if (arrynum.get(i)!= arrynum.get(j)   ){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        int num;
        int base;
        Scanner scanner = new Scanner(System.in);
        num = scanner.nextInt();
        base = scanner.nextInt();
        if (num ==0){
            System.out.println("Yes");
            System.out.print(0);
            return;
        }
        ArrayList<Integer> transNums = radixTrans(num,base);
        if ( isPalindromic(transNums)) {
            System.out.println("Yes");
            System.out.print(transNums.get(0));
            for (int i = 1; i <transNums.size() ; i++) {
                System.out.print(" "+transNums.get(i));
            }
        }else{
            System.out.println("No");
            System.out.print(transNums.get(transNums.size()-1));
            for (int i = transNums.size()-2; i >=0 ; i--) {
                System.out.print(" "+transNums.get(i));
            }
        }
    }
}
