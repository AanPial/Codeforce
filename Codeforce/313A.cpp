#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    
    if(n[0] == '-')
    {
        int len=n.size();
        if(n[len-1]>n[len-2])
        {
            n.resize(len-1);
        }
        else
        {
            n[len-2]=n[len-1];
            n.resize(len-1);
        }
        if(n=="-0")
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
        
        
    }
    else
    {
        cout<<n<<endl;
    }

    return 0;
}