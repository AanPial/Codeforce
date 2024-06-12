#include<iostream>
using namespace std;
struct vector{
    int arr[3];
};
int main()
{
    int n;
    cin>>n;
    struct vector vc[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>vc[i].arr[j];
        }
    }
    int s[3] = {0, 0, 0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            s[i]+=vc[j].arr[i];
        }
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=s[i];
    }
    if(sum==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}