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
        for (int i = 0; i <N ; i++) {
            nums[i] = scanner.nextInt();

            if (!numSet.contains(nums[i]) && isRepeat[nums[i]] ==0 ) {
                numSet.add(nums[i]);

            } else {
                numSet.remove(nums[i]);

            }
            isRepeat[nums[i]] +=1;
        }
        if (numSet.isEmpty()) {
            System.out.print("None");
            return;
        }
        else{

            Iterator<Integer> unique = numSet.iterator();
            System.out.print(unique.next());

        }
//        for (int i = 0; i <nums.length ; i++) {
//            if (isRepeat[nums[i]] == true){
//                System.out.print(nums[i]);
//                return;
//            }
//        }
    }
}
