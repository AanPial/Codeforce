#include <iostream>
using namespace std;

int main()
{
    int a, b, z, n, i = 0, r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        r = a / b;
        if (a%b != 0)
        {
            z = ((r + 1) * b) - a;
        }
        else
        {
           z=0;
        }
        cout << z << endl;
    }
    return 0;
}