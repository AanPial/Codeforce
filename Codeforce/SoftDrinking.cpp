#include<iostream>
using namespace std;
int findMin(int tSlice,int tToast,int p)
{
    if(tSlice<tToast && tSlice<p)
    {
        return tSlice;
    }
    else if(tToast<tSlice && tToast<p)
    {
        return tToast;
    }
    else
    {
        return p;
    }
}
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tSlice=c*d;
    int tToast=(k*l)/nl;
    int tSalt = p / np;
    int x=findMin(tSlice,tToast,tSalt);
    cout<<x/n<<endl;
    return 0;
}