#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        cout << arr[i - 1] << " ";
        int x = abs(arr[i] - arr[i - 1]);

        if (x > 1)
        {
            int a = arr[i - 1];
            int b = arr[i];

            if (a < b)
            {
                for (int j = a + 1; j < b; j++)
                {
                    cout << j << " ";
                }
            }
            else
            {
                for (int j = a - 1; j > b; j--)
                {
                    cout << j << " ";
                }
            }
        }
    }

    cout << arr[n - 1] << endl;

    return 0;
}
