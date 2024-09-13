#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        cout << (n - 1) / 2 << endl;
        t--;
    }
    return 0;
}