#include <bits/stdc++.h>
using namespace std;
bool check = true;
long long DivSix_And_Two(long long n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n % 6 == 0)
        {
            return 1 + DivSix_And_Two(n / 6);
        }
        else if ((n * 2) % 6 == 0)
        {
            return 1 + DivSix_And_Two(2 * n);
        }
        else
        {
            check = false;
            return -1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        check=true;
        long long x = DivSix_And_Two(n);
        if (check == true)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}