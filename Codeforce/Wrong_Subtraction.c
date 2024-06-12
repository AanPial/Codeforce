#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(n>1)
    {
        while(k>0)
        {
            int l=n%10;
            if(l!=0)
            {
                n--;
            }
            else
            {
                n/=10;
            }
            k--;
        }
        printf("%d",n);
    }
}