#include<bits/stdc++.h>
using namespace std;
struct hishab{
    long long idx;
    long long taka;
};
bool compare(hishab &A1, hishab &A2)
{
    return A1.idx < A2.idx;
}

int main()
{
    long long n,k;  
    cin>>n>>k;
    hishab arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].idx;
        cin>>arr[i].taka;
    }
    sort(arr,arr+n,compare);
    long long c=0;
    for(int i=0;i<n;i++)
    {
        if(k>=arr[i].idx-c)
        {
            k-=arr[i].idx-c;
            c=arr[i].idx;
            k+=arr[i].taka;
        }
        else
        {
            break;
        }
    }
    cout<<c+k<<endl;
    return 0;
    return 0;
}