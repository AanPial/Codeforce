#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int temp=n;
        int temp1=n;
        int c=0,x,j=1;
        while(n!=0)
        {
            x=n%10;
            if(x!=0)
            {
                temp=temp-x*j;
                int p=x*j;
                c++;
            }
            n /= 10; 
            j=j*10;
        }
        n=temp1;
        j = 1; 
        int arr[c];
        int e=0;
        while(n!=0)
        {
            x=n%10;
            if(x!=0)
            {
                temp=temp-x*j;
                int p=x*j;
                arr[e]=p;
                e++;
            }
            n /= 10; 
            j=j*10;
        }
        cout<<c<<endl;
        for(int i=c-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}