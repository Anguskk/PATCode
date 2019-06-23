package com.uestc;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Vector;
/*
HashMap中的元素是无序的
for ( HashMap.Entry<String,String> entry : accounts.entrySet()) {
        System.out.println(entry.getKey()+" "+entry.getValue());
 */
public class Password {
    public static HashMap<Character,Character>  charMap = new HashMap<>();
    public static Vector<String>  modifiedpasswords = new Vector<>();
    public static Vector<String>  modifiednames = new Vector<>();
    public static void main(String[] args) {
        charMap.put('1','@');
        charMap.put('0','%');
        charMap.put('l','L');
        charMap.put('O','o');
        Scanner scanner = new Scanner(System.in);
        int n;
        int cnts=0;
        n = scanner.nextInt();
        boolean[] cnt = new boolean[n];
        HashMap<String, String> accounts=new HashMap<>();
        for (int i = 0; i <n ; i++) {
            String name;
            String account;
            //String line =scanner.nextLine();
            name= scanner.next();
            account = scanner.next();
            //String[] temp = new String[2];
            //temp = line.split("//s+");
            StringBuilder sb= new StringBuilder();

            for (int j = 0; j <account.length() ; j++) {
                if (account.charAt(j)== '1'||account.charAt(j)== '0'||account.charAt(j)== 'O'||account.charAt(j)== 'l')
                {
                    sb.append(charMap.get(account.charAt(j)));
                    cnt[i] = true;
                }
                else{
                    sb.append(account.charAt(j));
                }
            }
            if (cnt[i] == true){
                modifiednames.add(name);
                modifiedpasswords.add(sb.substring(0));
                accounts.put(name, sb.substring(0));
                cnts ++;
            }

        }
        if (cnts == 0) {
            if (n==1)         System.out.printf("There is %d account and no account is modified",n);
            else   System.out.printf("There are %d accounts and no account is modified\n",n);
        }
        else {
            System.out.println(cnts);
            for (int i = 0; i <modifiednames.size() ; i++) {
                System.out.println(modifiednames.elementAt(i)+" "+modifiedpasswords.elementAt(i));
            }
//            for ( HashMap.Entry<String,String> entry : accounts.entrySet()) {
//                System.out.println(entry.getKey()+" "+entry.getValue());
//            }
        }

    }
}
