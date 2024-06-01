#include<stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d%d",&n,&m);

    while(n<=m)
    {
        n=n*3;
        m=m*2;
        c++;
    }
    printf("%d",c);
}