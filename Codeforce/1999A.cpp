#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        cout << (str[0] - '0') + (str[1] - '0') << endl;
    }
    return 0;
}