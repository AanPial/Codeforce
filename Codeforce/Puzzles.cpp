#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int k=0,l=n-1;
    int min=arr[l]-arr[k];
    int x;
    while(l<m)
    {
        x=arr[l]-arr[k];
        if(x<min)
        {
            min=x;
        }
        k++;
        l++;
    }
    cout<<min<<endl;
    return 0;
}