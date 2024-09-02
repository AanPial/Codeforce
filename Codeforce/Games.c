#include<stdio.h>
struct game
{
    int home;
    int guest;
};
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    struct game arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i].home);
        scanf("%d",&arr[i].guest);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                if(arr[i].home == arr[j].guest)
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}