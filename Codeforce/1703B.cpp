#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int m = 0; m < t; m++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        sort(str.begin(),str.end());
        int unique = 1;
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i] != str[i - 1])
            {
                unique++;
            }
            
        }
        cout << unique+n<< endl;
    }
}