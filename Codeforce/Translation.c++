#include<iostream>
#include<string>
using namespace std;
int compar(string s,string t)
{
    char temp;
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    if (s==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int c=compar(s,t);
    if(c==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}