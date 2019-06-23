package com.uestc;

import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Scanner;

public class UniqueNumber {
    //public static HashSet<Integer>  numSet =  new HashSet<>();
    public static LinkedHashSet<Integer> numSet =  new LinkedHashSet<>();
    public static int[]  isRepeat= new int[10001];
    public static void main(String[] args) {
        Scanner scanner= new Scanner(System.in);
        int N;

        N =scanner.nextInt();
        int[] nums = new int[N];
        nums[0] = scanner.nextInt();
        isRepeat[nums[0]] +=1;
       // int pointer = nums[0];
        for (int i = 1; i <N ; i++) {
            nums[i] = scanner.nextInt();
           isRepeat[nums[i]] +=1;
//            if (isRepeat[pointer] >1) {
//
//            }
        }

        for (int i = 0; i <nums.length ; i++) {
            if (isRepeat[nums[i]] == 1){
                System.out.print(nums[i]);
                return;
            }
        }
        System.out.print("None");
    }
}
