#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);

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
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}