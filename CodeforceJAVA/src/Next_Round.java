import java.util.*;
public class Next_Round {
    public static void main(String[] args) {
        Scanner p=new Scanner(System.in);
        int n,k;
        n=p.nextInt();
        k=p.nextInt();
        int arr[]=new int[n];
        int i,count=0;
        for(i=0;i<n;i++)
        {
            arr[i]=p.nextInt();
        }
        for ( i = 0; i < n; i++)
        {
            if (arr[i]>arr[k-1] || arr[i]==arr[k-1] && arr[i]!=0)
            {
                count++;
            }

        }
        System.out.println(count);
    }
}