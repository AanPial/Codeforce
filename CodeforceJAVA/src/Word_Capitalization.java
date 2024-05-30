import java.util.*;
public class Word_Capitalization {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s= sc.next();
        String c=s.charAt(0)+"";
        String cc=c.toUpperCase();
        String pp=s.substring(1);

        System.out.println(cc+pp);

    }
}
