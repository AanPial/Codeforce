#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],c[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+1 == arr[j])
            {
                c[k]=j+1;
                k++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}