#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
    
        double x;
        long long z;
        long long k = 2;
        while (1)
        {
            x = n / (pow(2, k) - 1);
            if (x == (long long)x)
            {
                z=(long long)x;
                break;
            }
            k++;
        }
        cout << z << endl;
    }

    return 0;
}