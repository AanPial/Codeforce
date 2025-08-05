#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n=str.length();
        string s1="",s2="";
        for(int i=0; i<n/2; i++)
        {
            s1+=str[i];
        }
        for(int i=n/2; i<n; i++)
        {
            s2+=str[i];
        }
        if(n%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(s1==s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
