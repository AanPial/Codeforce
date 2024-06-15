#include<iostream>
using namespace std;
int main()
{
    int n,h,count=0;
    cin>>n;
    cin>>h;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
        {
            count=count+2;
        }
        else
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}