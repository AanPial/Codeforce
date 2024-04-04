import java.util.*;
public class Watermelon {
    public static void main(String[] args) {
        Scanner p=new Scanner(System.in);
        int n,i,x=0;
        n=p.nextInt();

        for(i=2;i<n;i+=2)
        {
            if((n-i)%2==0)
            {
                x=1;
                break;
            }
        }
        if(x==1)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}
