#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n < 2020)
        {
            cout << "NO" << endl;
        }
        else if (n % 2020 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2021 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int p = n / 2020;
            int q = n % 2020;
            if (q <= p && z == n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
