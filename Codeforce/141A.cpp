#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str1[1000];
    char str2[1000];
    char str3[1000];

    cin>>str1>>str2>>str3;

    strcat(str1,str2);
    int n,m;
    n=strlen(str1);
    m=strlen(str3);
    sort(str1,str1+n);
    sort(str3,str3+m);

    if(strcmp(str1, str3) == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}