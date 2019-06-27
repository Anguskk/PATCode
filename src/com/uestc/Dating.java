package com.uestc;

import java.util.Scanner;

public class Dating {
    public static final String[] week ={"Nothing","MON","TUE","WED","THU","FRI","SAT","SUN"};
    public static final String[] hours ={"00","01","02","03","04","05","06","07","08","09"
                           ,"10","11","12","13","14","15","16","17","18","19","20","21","22","23"};
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] inputs = new String[4];
        for (int i = 0; i <4 ; i++) {
            inputs[i] = scanner.next();
        }
        char hourPointer=0;
        char day =0;
        int i = 0,j=0;
        for ( ; i <inputs[0].length() && j<inputs[1].length()  ;i++, j++) {
            if ( inputs[0].charAt(i) == inputs[1].charAt(j))
                if ( inputs[0].charAt(i) == inputs[1].charAt(j)){
                    if (inputs[0].charAt(i)>='A' &&inputs[0].charAt(i)<='G') {
                        day = inputs[0].charAt(i);
                        break;
                    }
            }
        }
        i++;
        j++;
        for ( ; i <inputs[0].length() && j<inputs[1].length()  ;i++, j++) {
            if ( inputs[0].charAt(i) == inputs[1].charAt(j))
                if ( inputs[0].charAt(i) == inputs[1].charAt(j)){
                    if ((inputs[0].charAt(i)>='A' &&inputs[0].charAt(i)<='N') ||
                            (inputs[0].charAt(i)>='0' &&inputs[0].charAt(i)<='9')) {
                                hourPointer =inputs[0].charAt(i);
                                break;
                    }
                }
        }
        int minutePointer=0;
        for ( int i1=0,j1=0; i1 <inputs[2].length() && j1<inputs[3].length()  ;i1++, j1++) {
            if ( inputs[2].charAt(i1) == inputs[3].charAt(j1))
                {
                    if (inputs[2].charAt(i1)>='a' &&inputs[2].charAt(i1)<='z') {
                        minutePointer = i1;
                        break;
                    }
                }
        }
        String minute="";
        if (minutePointer < 10) {

            minute = "0"+minutePointer;
        }
        else minute += minutePointer;
        String hour="";

        if (hourPointer>= 'A') hour = hours[10+hourPointer-'A'];
        else hour = hours[hourPointer-'0'];
        System.out.print(week[day-'A'+1]+" "+hour+":"+minute);

    }
}
