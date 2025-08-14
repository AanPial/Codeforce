#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=1,r=n;
    while(r >= sum + i)
    {
        sum+=i;
        r=r-sum;
        i++;
    }
    cout<<i-1<<endl;
}