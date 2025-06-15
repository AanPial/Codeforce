#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        if((n/2)%2==0)
        {
            cout<<"YES"<<endl;
            int evensum=0;
            int c=0;
            int i=2;
            while(c<(n/2))
            {
                cout<<i<<" ";
                evensum+=i;
                i+=2;
                c++;
            }
            c=0;
            i=1;
            int oddsum=0;
            while(c<(n/2)-1)
            {
                cout<<i<<" ";
                oddsum+=i;
                i+=2;
                c++;
            }
            cout<<(evensum-oddsum)<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}