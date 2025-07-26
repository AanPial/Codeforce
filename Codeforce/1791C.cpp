#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int m=0;m<t;m++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i = 0, j = n - 1;
        int temp = n;
        while((s[i] != s[j]) && (i < j))
        {
            temp -= 2;
            i++;
            j--;
        }
        cout << temp << endl;
    }

    return 0;
}