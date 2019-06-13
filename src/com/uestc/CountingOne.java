package com.uestc;

import java.util.Scanner;

public class CountingOne {
    public static final int N = 13;
    public static long[] table = new long[N];
    public static long[] cdfTable = new long[N];

    public static void calTable() {
        table[1] = 1;
        cdfTable[1] = 1;
        //[1,10),[10,100),[100,1000)
        long temp;
        for (int i = 2; i < N; i++) {
            temp = (long) Math.pow(10, i - 1) + 9 * (i - 1) * (long) Math.pow(10, i - 2);
            table[i] = temp;
            cdfTable[i] = temp;
        }
        //[1,10),[1,100),[1,1000)
        for (int i = 2; i < N; i++) {
            cdfTable[i] += cdfTable[i - 1];
        }

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;
        num = scanner.nextInt();
        //calTable();
        int len = 0;
        int temp = num;
        while (temp > 0) {
            temp = temp / 10;
            len++;
        }

        //long sum = cdfTable[len - 1];
        //最高位为1
        //分别统计各个数位的1
        //该位的数字>=1,
        //该位的数字<1,高位的数字-1
        long sum=0;
        for (int i = 1; i <= len ; i++) {
            //取这位数，保证这位数>=1
            //高位部分 len-i位，低位部分i-1位
            int Mod = (int )Math.pow(10,i);
            int highpart= num/Mod;
            int lowpart = num % Mod %(Mod/10);
            int tempdight = ( num % Mod )/(Mod/10);
            if (i==1) {
                tempdight= num%10;
                lowpart=0;
                if (tempdight >=1) {
                    sum += highpart+1;
                }else{
                    sum += highpart;
                }

            }else
            if (len == i) {
                highpart=0;
                tempdight = num/(Mod/10);
                lowpart = num%Mod;
                if (tempdight >1) {
                    sum += Math.pow(10,i-1);
                }else if (tempdight ==1){
                    sum += lowpart+1;
                }
            }else{
                //中间位
                //统计，分两种类型
                if (tempdight>1){
                    sum += (highpart+1)*Math.pow(10,i-1);
                }else if (tempdight ==1){
                    sum += highpart*Math.pow(10,i-1)+lowpart+1;
                }
                else{
                    sum += highpart*Math.pow(10,i-1);
                }
            }
        }
            System.out.print(sum);
    }
}
//            //考虑这一位的数小于1，
//            // 还是大于等于1
//            //高位可以变
//            if (tempdight >=1) {
//                cnt_high =(int)((highpart-(int)Math.pow(10,len-i-1)) * Math.pow(10,i-1));
//                cnt_low  = lowpart+1;
//            }else{
//                //该位小于一时，前一位必须减一，保证在范围内
//                cnt_high =(int)((highpart-(int)Math.pow(10,len-i-1)-1) * Math.pow(10,i-1));
//
//            }
//                
//            //高位固定
//            cnt_low  = lowpart+1;
//            sum += (long)cnt_high+cnt_low;
//        }
