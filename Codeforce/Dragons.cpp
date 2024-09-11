#include<iostream>
#include<algorithm>
using namespace std;
struct level
{
    int drlvl;
    int bonus;
};
bool compr(const level a,const level b)
{
    return a.drlvl<b.drlvl;
}
int main()
{
    int s,n,w=1;
    cin>>s>>n;
    struct level arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].drlvl>>arr[i].bonus;
    }
    sort(arr,arr+n,compr);
    for(int i=0;i<n;i++)
    {
        if(s>arr[i].drlvl)
        {
            s+=arr[i].bonus;
        }
        else
        {
            w=0;
        }
    }
    if(w == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}