#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        sort(str.begin(), str.end());
        int c=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='A')
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c>(str.length()-c))
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
}