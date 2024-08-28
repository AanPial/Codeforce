#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    int arr[n],mrr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mrr[i]=0;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            mrr[i-1]=c;
            c=1;
        }
        else
        {
            c++;
        }
    }
    mrr[n - 1] = c;
    int max=mrr[0];
    for(int i=0;i<n;i++)
    {
        if(mrr[i]>max)
        {
            max=mrr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}