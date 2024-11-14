#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int arr[n];
        int p;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] != arr[1] && arr[0] != arr[2])
        {
            p = 1;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] != arr[0])
                {
                    p = i + 1;
                    break;
                }
            }
        }

        cout << p << endl;
    }
    return 0;
}
