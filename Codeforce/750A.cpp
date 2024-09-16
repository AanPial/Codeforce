#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=k;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i*5;
        
        if(sum>240)
        {
            break;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}