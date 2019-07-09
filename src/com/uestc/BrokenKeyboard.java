//BrokenKeyboard
import java.util.Scanner;

public class BrokenKeyboard{
    public static boolean[] flagChar = new boolean[256];
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String originalText = scanner.next();
        String changedText = scanner.next();
        StringBuilder  sb = new StringBuilder();
        originalText = originalText.toLowerCase();
        changedText = changedText.toLowerCase();
        scanner.close();
        int i,j;
        for (i = 0,j=0; i < originalText.length() && j<changedText.length(); ) {
            if (originalText.charAt(i) == changedText.charAt(j)) {
                i++;j++;continue;
            } else {
                char  temp = originalText.charAt(i);
                if(flagChar[temp]== false){
                    sb.append(temp);
                }
                i++;
                while(originalText.charAt(i) == temp){
                    if(i == originalText.length()-1) break;
                    i++;
                    
                }
                
            }
        }
        System.out.println(sb);
    }
}