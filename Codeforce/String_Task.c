#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);

    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'||str[i]=='o'|| str[i]=='u'|| str[i]=='y'||
           str[i]=='A' || str[i]=='E'|| str[i]=='I'||str[i]=='O'|| str[i]=='U'|| str[i]=='Y')
           {
              for(int j=i;j<n;j++)
              {
                str[j]=str[j+1];
              }
              n--;
              i--;
           }
           
    }
    int m=strlen(str);
    char str1[m];
    for(int i=0;i<m;i++)
    {
        str1[i]=tolower(str[i]);
    }
    int p=m*2;
    char str2[p];
    for(int i=0;i<=p;i++)
    {
        if(i%2==0)
        {
            str2[i]='.';
        }
        else if(i%2!=0)
        {
            str2[i] = str1[i/2];
        }
    }
    str2[p] = '\0';
    printf("%s",str2);

    return 0;
    
}