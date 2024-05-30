import java.util.*;
public class Boy_or_Girl {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int n=str.length();
        String ps="";
        int flag=1;
        for(int i=0;i<n;i++)
        {
            char c1=str.charAt(i);
            for(int j=i+1;j<n;j++)
            {
                char c2=str.charAt(j);
                if(c1==c2)
                {
                    flag=0;
                    break;
                }


            }
            if (flag==1){
                ps+=c1;
            }
            flag=1;
        }
        int m = ps.length();

        if (m % 2 == 0) {
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }

    }
}
