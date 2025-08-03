#include <bits/stdc++.h>
using namespace std;

string customSort(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[j] < s[i])
                swap(s[i], s[j]);
        }
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    for (int m = 0; m < t; m++)
    {
        int n;
        cin >> n;
        string str, main = "Timur";
        main = customSort(main);
        cin >> str;
        str = customSort(str);
        if (str == main)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}