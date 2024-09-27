#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    int i=1,flag=0;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n>1 && n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            while(n>1)
            {
                x=n/pow(2,i);
                if(x%2!=0 && x>1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                
            }
            cout<<"NO"<<endl;
        }
    }
}