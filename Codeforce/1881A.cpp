#include<bits/stdc++.h>
using namespace std;
bool check(string str,string ptr)
{
    for(int i=0;i<=(str.length()-ptr.length());i++)
    {
        int flag=1;
        for(int j=0;j<ptr.length();j++)
        {
            if(str[i+j]!=ptr[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,m;
        cin>>n>>m;
        string str,ptr;
        cin>>str>>ptr;
        string str0,str1,str2,str3,str4,str5,str6;

        str0=str;
        str1=str0+str0;
        str2=str1+str1;
        str3=str2+str2;
        str4=str3+str3;
        str5=str4+str4;
        str6=str5+str5;
        
        if(str0.length()>=ptr.length() && check(str0,ptr)==true)
        {
            cout<<0<<endl;
        }
        else if(str1.length()>=ptr.length() && check(str1,ptr)==true)
        {
            cout<<1<<endl;
        }
        else if(str2.length()>=ptr.length() && check(str2,ptr)==true)
        {
            cout<<2<<endl;
        }
        else if(str3.length()>=ptr.length() && check(str3,ptr)==true)
        {
            cout<<3<<endl;
        }
        else if(str4.length()>=ptr.length() && check(str4,ptr)==true)
        {
            cout<<4<<endl;
        }
        else if(str5.length()>=ptr.length() && check(str5,ptr)==true)
        {
            cout<<5<<endl;
        }
        else if(str6.length()>=ptr.length() && check(str6,ptr)==true)
        {
            cout<<6<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}