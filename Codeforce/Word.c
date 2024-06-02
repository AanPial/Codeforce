#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[100];
    scanf("%s",str1);
    int n=strlen(str1);
    int c1=0,c2=0;
    char str2[n];
    for(int i=0;i<n;i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
            c1++;
        }
        else if(str1[i]>='A' && str1[i]<='Z')
        {
            c2++;
        }
    }
    if(c2>c1)
    {
        for(int i=0;i<n;i++)
        {
            str2[i]=toupper(str1[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            str2[i]=tolower(str1[i]);
        }
    }
    str2[n] = '\0';
    printf("%s",str2);
}