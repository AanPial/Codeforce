#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string arr;
    int sum1,sum2;
    for(int j=0;j<t;j++)
    {
        sum1=0;
        sum2=0;
        cin>>arr;
        for(int i=0;i<6;i++)
        {
            if(i<3)
            {
                sum1+=arr[i]-'0';
            }
            else
            {
                sum2+=arr[i]-'0';
            }
        }
        if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}