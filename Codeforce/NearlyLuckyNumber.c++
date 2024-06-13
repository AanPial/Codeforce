#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long c;
    int flag = 1, count = 0;
    while (n > 0)
    {
        c = n % 10;
        if (c == 4 || c == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}