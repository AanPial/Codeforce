#include<iostream>
#include<string>
using namespace std;

int check(int n)
{
    int q = 0;
    string s = to_string(n);
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = i + 1; j < s.length(); j++)
        {
            if(s[i] == s[j])
            {
                q = 1;
                break;
            }
        }
        if(q == 1)
        {
            break;
        }
    }
    return q;
}

int main()
{
    int n, flag = 0;
    cin >> n;

    while(flag != 1)
    {
        n++;
        if(check(n) == 0)
        {
            flag = 1;
        }
    }
    cout << n << endl;
}

