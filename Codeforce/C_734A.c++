#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int A=0,D=0,n;
    cin>>n;
    cin.ignore();
    char s[n+1];
    cin.getline(s,n+1);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }
    if(A>D)
    {
        cout<<"Anton";
    }
    else if (D>A)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}