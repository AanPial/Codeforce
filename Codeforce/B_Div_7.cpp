#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int adjusted = (n / 10) * 10;
            for (int i = 0; i < 10; ++i)
            {
                if ((adjusted + i) % 7 == 0)
                {
                    cout << adjusted + i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
