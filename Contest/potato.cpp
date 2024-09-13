#include <iostream>
using namespace std;

int main()
{
    int n, h, k;
    cin >> n >> h >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0, sec = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum > h)
        {
            sum -= k;
            sec++;
        }
    }

    if (sum > 0)
    {
        sec += (sum + k - 1) / k;
    }

    cout << sec << endl;
}
