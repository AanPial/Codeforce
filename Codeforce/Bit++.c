#include<stdio.h>
#include<string.h>

struct bit
{
    char statement[10];
};

int main()
{
    int n,i;
    scanf("%d",&n);
    struct bit s[n];

    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i].statement);
    }
    int x=0;

    for(i=0;i<n;i++)
    {
        if (strcmp(s[i].statement,"x++")==0 || strcmp(s[i].statement,"++x")==0 || strcmp(s[i].statement,"X++")==0 || strcmp(s[i].statement,"++X")==0 )
        {
            x++;
        }
        else if (strcmp(s[i].statement,"x--")==0 || strcmp(s[i].statement,"--x")==0 || strcmp(s[i].statement,"X--")==0 || strcmp(s[i].statement,"--X")==0 )
        {
            x--;
        }
        
    }
    printf("%d",x);
}