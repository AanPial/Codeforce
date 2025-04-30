#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        string arr,str="";
        cin>>arr;
        char ch=arr[arr.length()-1];
        for(int i=0;i<arr.length()-1;i++)
        {
            if(arr[i]==arr[i-1])
            {
                arr[i]='1';
                continue;
            }
            str+=arr[i];
        }
        str+=ch;
        cout<<str<<endl;
    }

    return 0;

}