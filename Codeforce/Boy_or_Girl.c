#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    scanf("%s",ch);

    int n=strlen(ch);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ch[i]==ch[j])
            {
                for(int k=j;k<n;k++)
                {
                    ch[k]=ch[k+1];
                }
                j--;
                n--;
            }
            
        }
    }

    int m=strlen(ch);

    if (m%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    

    return 0;
}