#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t="hello";
    int j=0;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[j])
        {
            j++;
            if(t.length()==j)
            {
                flag=1;
                break;
            }
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
    return 0;
}