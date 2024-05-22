#include<stdio.h>
#include <strings.h>
int main()
{
    char s1[100];
    char s2[100];
    scanf("%100s",s1);
    scanf("%100s",s2);
   
    int n=strcasecmp(s1,s2);
    printf("%d\n",n);
}