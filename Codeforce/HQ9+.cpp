#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch[1000];
    cin>>ch;
    int pivot=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9')
        {
            pivot=1;
            break;
        }
    }
    if(pivot==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}