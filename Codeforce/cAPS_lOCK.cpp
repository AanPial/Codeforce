#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char str[101];
    cin >> str;

    int x = 1, y = 0, z = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            x = 0;
            break;
        }
    }
    if (islower(str[0]))
    {
        y = 1;
    }
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            z = 0;
            break;
        }
    }
    if (x == 1)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else if (y == 1 && z == 1)
    {
        str[0] = toupper(str[0]);
        for (int i = 1; str[i] != '\0'; i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}
