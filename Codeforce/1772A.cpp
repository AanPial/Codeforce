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
        int m = (str[0] - '0') + (str[2] - '0');
        cout<<m<<endl;
    }
}