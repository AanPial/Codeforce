#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int x = s[0] - '0';
        int countsum=0;
        for(int i = 1; i <= n; i++)
        {
            countsum += i;
        }
        int result=(x*10)-(10-countsum);
        cout << result << endl;
    }
}