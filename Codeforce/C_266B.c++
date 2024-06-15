#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    cin>>t;

    char str[n+1];
    cin.ignore();
    cin.getline(str,n+1);
    while(t>0)
    {
        for(int i=0;i<=n;i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
        t--;
    }
    cout<<str<<endl;

    return 0;
}