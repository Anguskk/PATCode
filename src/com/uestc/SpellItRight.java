package com.uestc;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class SpellItRight {
    public static int[] getdights(int sum){
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        int cnt=0;
        int dights=0;
        int temp;
        while (sum>0){
            temp = sum%10;
            cnt++;
            numbers.add(temp);
            sum = sum/10;
        }
        int[] ans = new int[numbers.size()];
        int i=1;
        for (int num: numbers ) {
            ans[numbers.size()-i] = num;
            i++;
        }
        return  ans;
    }

    public static void main(String[] args) {
        long start = System.currentTimeMillis();
        String str="";
        Scanner scanner= new Scanner(System.in);
        if (scanner.hasNextLine()) str=scanner.next();
        String[] elements={"zero","one","two","three","four","five","six","seven","eight","nine"};
        int sum=0;
        for (int i = 0; i <str.length() ; i++) {
            char c= str.charAt(i);
            sum   +=   c-'0';
        }
//        String res= String.valueOf(sum);
//        System.out.print(elements[res.charAt(0)-'0']);
//        for (int i = 1; i <res.length(); i++) {
//            System.out.print(" "+elements[res.charAt(i)-'0']);
//        }
        if (sum == 0) {
            System.out.print(elements[0]);
        }
        else{
            int[] dights=getdights(sum);
            System.out.print(elements[dights[0]]);
            for (int i=1;i<dights.length;i++) {
                System.out.print(" "+elements[dights[i]]);
            }
            long end = System.currentTimeMillis( );
            long diff = end - start;

        }

        //System.out.printf("\n%dms",diff);
    }
}
//        HashMap<String,String> my= new HashMap<>();
//        my.put("123","one two three");
//        my.put("009","zero zero niee");
//        my.put("3213213","nothing");
//        String ans;
//        ans=my.get("123");
//        ans=my.get("009");
//        ans=my.get("nothing");
