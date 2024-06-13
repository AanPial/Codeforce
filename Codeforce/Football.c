#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int count=1,flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]=='0' && str[i+1]=='0') || (str[i]=='1' && str[i+1]=='1'))
        {
            count++;
        }
        else
        {
            if(count>=7)
            {
                flag=1;
                break;
            }
            else
            {
                count=1;
            }
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}