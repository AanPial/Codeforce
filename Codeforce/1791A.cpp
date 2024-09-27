#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,flag;
    char str[260]="codeforces";
    cin>>t;
    char c;
    for(int i=0;i<t;i++)
    {
        flag=0;
        cin>>c;
        for(int j=0;str[j]!='\0';j++)
        {
            if(c==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}