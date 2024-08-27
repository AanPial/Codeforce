#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    char str1[1000];
    cin.getline(str1, 1000);
    char str2[1000];
    int j = 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';

    sort(str2, str2 + j);
    int c = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (i == 0 || str2[i] != str2[i - 1])
        {
            c++;
        }
       
    }
    cout << c << endl;
    return 0;
}
