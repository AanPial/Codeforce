#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=(pow(-1,i)*i);
    }
    cout<<sum<<endl;
    return 0;
}
//this is an inefficient solv because the time complexity is very high