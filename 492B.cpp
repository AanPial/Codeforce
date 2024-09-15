#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max=0;
    if(n>1)
    {
        max = arr[1] - arr[0];
    for(int i=2;i<n;i++)
    {
        if((arr[i]-arr[i-1])>max)
        {
            max=(arr[i]-arr[i-1]);
        }
    }
    }
    
    int m1=0,m2=0;
    if(arr[0]!=0)
    {
        m1=arr[0];
    }
    if(arr[n-1]!=l)
    {
        m2=l-arr[n-1];
    }
    if((max/2)>m1 && (max/2)>m2)
    {
        double x;
        x=max/2.0;
        cout<<fixed << setprecision(9) <<x<<endl;
    }
    else if(m1>(max/2) && m1>m2)
    {
        double x=(double)m1;
        cout<< fixed << setprecision(9) <<x<<endl;
    }
    else
    {
        double x=(double)m2;
        cout<< fixed << setprecision(9) <<x<<endl;
    }
}