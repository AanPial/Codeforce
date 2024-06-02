#include<stdio.h>
int main()
{
    int k,n,w,br,ks=0,temp;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1;i<=w;i++)
    {
        temp=k*i;
        ks+=temp;
    }
    if(ks>n){
        br=ks-n;
        printf("%d",br);
    }
    else
    {
        printf("0");
    }
    return 0;
}