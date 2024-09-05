#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int t = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                arr[i][j] = '#';
            }
            else
            {
                arr[i][j] = '.';
                if (j == m - 1 && t == 1)
                {
                    arr[i][m - 1] = '#';
                    t = 0;
                }
                else if (j == m - 1 && t == 0)
                {
                    arr[i][0] = '#';
                    t = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
