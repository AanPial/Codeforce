#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    getchar();
    char ch[n];
    fgets(ch,n+1, stdin);
    for(int i=0;i<n;i++)
    {
        if(ch[i]==ch[i+1])
        {
            c++;
        }
    }
    printf("%d",c);
}