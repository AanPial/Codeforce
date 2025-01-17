#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n, m;
        cin >> n >> m;
        int withOberlap = n * (4 * m);
        int peri = withOberlap;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (i == 0)
            {
                continue;
            }
            x = m - x;
            y = m - y;
            peri -= ((2 * x) + (2 * y));
        }
        cout << peri << endl;
    }

    return 0;
}