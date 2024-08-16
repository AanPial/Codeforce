#include <iostream>
#include<algorithm>//c++ e sorting er jonno headerfile
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<int>());//descending order er fnctn
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
    }
    int sum=0,i=0;
    while(sum<=total)
    {
        total=total-arr[i];
        sum=sum+arr[i];
        i++;
    }
    cout<<i<<endl;
    return 0;
}