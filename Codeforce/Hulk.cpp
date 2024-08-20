#include <iostream>
#include <string>
using namespace std;

int main()
{
    string p = "I hate ";
    string q = "I love ";
    string r;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "I hate it" << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                r = r + p;
                r = r + "that ";
            }
            else
            {
                r = r + q;
                r = r + "that ";
            }
        }
        if ((n-1) % 2 == 0)
        {
            r = r + p + "it";
        }
        else
        {
            r = r + q + "it";
        }
    }
    cout<<r<<endl;
}