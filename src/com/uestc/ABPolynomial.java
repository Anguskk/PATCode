package com.uestc;

import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.Scanner;

public class ABPolynomial {
    static int pointer=0;

    static double[] coeff = new double[1001];
    public static void main(String[] args) {
	// TODO  finish   A+B  polynomial
        //直接开  array[1001]   i:exp   a[i]:coeff

        Scanner scanner=new Scanner(System.in);
        int k1=scanner.nextInt();
        int cnt=k1;
        int exp;
        double coe;
        for (int i=0;i<k1;i++){
            exp=scanner.nextInt();
            if (exp > pointer) {
                pointer = exp;
            }
            coe=scanner.nextDouble();
            coeff[exp] = coe;
        }
        int k2=scanner.nextInt();
        for (int i = 0; i <k2; i++) {
            exp=scanner.nextInt();
            if (coeff[exp] == 0.0) {
                cnt++;
            }
            if (exp > pointer) {
                pointer = exp;
            }
            coe=scanner.nextDouble();
            coeff[exp] += coe;
            coeff[exp] = (double) Math.round(coeff[exp]*10)/10;
            if (coeff[exp] == 0.0) {
                cnt--;
            }
        }
        System.out.print(cnt);
       // DecimalFormat df=new DecimalFormat("0.0");
        for (int i = pointer; i >=0 ; i--) {
            if (coeff[i] != 0.0  ) {
                System.out.print(" "+i+" "+coeff[i]);

            }
        }
        //System.out.print("Hello");
    }
}
