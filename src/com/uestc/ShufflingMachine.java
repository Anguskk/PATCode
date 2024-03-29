package com.uestc;

import java.util.Scanner;

public class ShufflingMachine {
    public static String[] cards={"S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
                                "H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
                                "C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
                                "D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
                                "J1","J2"};

    public static String[] getCards() {
        return cards;
    }

    public static void main(String[] args) {
        int N;
        Scanner scanner=new Scanner(System.in);
        N = scanner.nextInt();
        int[] order = new int[54];
        for (int i = 0; i < 54 ; i++) {
        order[i] = scanner.nextInt();
        }
        String[] shuffle = new String[54];
        for (int i = 1; i <=N ; i++) {
            //洗牌
            for (int j = 0; j <54 ; j++) {
                shuffle[order[j]-1] =cards[j];
            }
            //洗牌后正序归位到原来的Cards
            for (int k = 0; k < 54; k++) {
                cards[k] = shuffle[k];
            }
        }
        System.out.print(cards[0]);
        for (int i=1;i<54;i++) {
            System.out.print(" "+cards[i]);
        }
    }
}
