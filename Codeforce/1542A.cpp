#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        int countOdd=0,countEven=0;
        for(int i=0;i<2*n;i++)
        {
            if(arr[i]%2==0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
        if(countOdd==countEven)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}