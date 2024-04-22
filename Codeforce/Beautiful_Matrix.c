#include <stdio.h>
int main()
{
    int arr[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y;
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
                printf("Error");
                break;
            }
        }
        if (f)
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
      
    printf("%d",count);
    
}