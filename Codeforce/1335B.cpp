#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        char str[a + 1], s[n + 1];
        char c = 'a';
        for (int i = 0; i < b; i++)
        {
            str[i] = c;
            c++;
        }
        str[a] == '\0';

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            s[i] = str[j];
            j++;
            if (j == b)
            {
                j = 0;
            }
        }
        s[n] = '\0';
        cout << s << endl;
    }
}