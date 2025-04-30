#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string arr;
        string str;
        cin>>arr>>str;
        char ch=str[0];
        str[0]=arr[0];
        arr[0]=ch;
        cout<<arr<<" "<<str<<endl;
    }
}