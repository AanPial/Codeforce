#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int arr[26]={0};
        int flag=0;
        for(int i=1;i<str.length();i++)
        {
            int index;
            if(str[i-1]!=str[i])
            {
                index = str[i-1] - 'A';
                if(arr[index]==0)
                {
                    arr[index]=1;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }

        int lastIndex = str[n-1] - 'A';
        if(arr[lastIndex]==1)
        {
            flag=1;
        }

        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
