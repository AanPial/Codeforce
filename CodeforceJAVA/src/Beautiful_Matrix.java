import java.util.*;
public class Beautiful_Matrix {
    public static void main(String[] args) {
        Scanner p=new Scanner(System.in);
        int [][]arr=new int[5][5];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                arr[i][j]=p.nextInt();
            }
        }
        int x=0, y=0;
        int f=0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (arr[i][j] == 1)
                {
                    x = i;
                    y = j;
                    f=1;
                    break;
                }
                else if (arr[i][j] == 0)
                {
                    continue;
                }
                else
                {
                    System.out.printf("Error");
                    break;
                }
            }
            if (f==1)
            {
                break;
            }

        }
        int count = 0;
        if (x<2)
        {
            while (x<2)
            {
                x++;
                count++;
            }

        }
        else if (x>2)
        {
            while (x>2)
            {
                x--;
                count++;
            }

        }
        if (y<2)
        {
            while (y<2)
            {
                y++;
                count++;
            }

        }
        else if (y>2)
        {
            while (y>2)
            {
                y--;
                count++;
            }

        }

        System.out.println(count);
    }
}
