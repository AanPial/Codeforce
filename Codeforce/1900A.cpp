#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count=0,sum=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='.')
            {
                count++;
                sum++;
                if(count==3)
                {
                    sum=2;
                    break;
                }
            }
            else if(str[i]=='#')
            {
                count=0;
            }
        }
        
        cout<<sum<<endl;
    }
}