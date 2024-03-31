#include <stdio.h>
#include<string.h>
struct word
{
    char name[10000];
};

int main()
{
    int x,i;
    scanf("%d",&x);
    struct word s[x];

    for ( i = 0; i < x; i++)
    {
        scanf("%s", s[i].name);
    }

    for (i = 0; i < x; i++)
    {
        int n = strlen(s[i].name);
        int t = n - 2;
        if (n <=10)
        {
            printf("%s\n",s[i].name);
        }
        else
        {
            printf("%c%d%c\n", s[i].name[0], t, s[i].name[n-1]);
        }
        n=0;
        t=0;
    }
    
    return 0;
}