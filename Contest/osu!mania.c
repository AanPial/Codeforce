#include<stdio.h>
struct ch
{
    char str[100];
};
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int c;
        scanf("%d",&c);
        struct ch arr[c];
        for(int j=0;j<c;j++)
        {
            scanf("%s",arr[j].str);
        }
        for(int j=c-1;j>=0;j--)
        {
            for(int k=0;arr[j].str[k]!='\0';k++)
            {
                if(arr[j].str[k]=='#')
                {
                    printf("%d ",k+1);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}