import java.util.*;
public class Petya_and_Strings {
    public static int check(String s1,String s2){
        String p1=s1.toUpperCase();
        String p2=s2.toUpperCase();
        int flag=0;
        if(p1.length()<p2.length()){
            return -1;
        }
        else if (p1.length()==p2.length()){
            for (int i=0;i<p1.length();i++){
                char c1=p1.charAt(i);
                char c2=p2.charAt(i);
                if (c1<c2){
                    flag=-1;
                    break;
                }
                else if (c1>c2){
                    flag=1;
                    break;
                }
            }
            return flag;
        }
        else {
            return 1;
        }

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        System.out.println(check(s1,s2));

    }
}
