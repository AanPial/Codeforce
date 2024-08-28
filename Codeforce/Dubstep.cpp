#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[1000];
    cin.getline(str1,1000);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='B' && str1[i-1]=='U' && str1[i-2]=='W')
        {
            str1[i]='0';
            str1[i-1]='0';
            str1[i-2]='0';
        }
        else
        {
            continue;
        }
    }
    
    char str2[1000];
    int j=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!='0')
        {
            if(str1[i+1]=='0')
            {
                str2[j]=str1[i];
                j++;
                str2[j]=' ';
                j++;
            }
            else
            {
                str2[j]=str1[i];
                j++;
            }
        }
        else
        {
            continue;
        }
    }
    str2[j] = '\0'; 
    cout<<str2<<endl;
    return 0;
}