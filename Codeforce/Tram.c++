#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,max;
    cin>>n;
    int arr[n];
    arr[0]=0;
    max=arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>a;
        cin>>b;
        arr[i]=arr[i-1]-a+b;
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}