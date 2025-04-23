#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int chec[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        chec[i] = arr[i];
    }
    sort(chec, chec + n);
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (chec[i] == 1)
        {
            a++;
        }
        else if (chec[i] == 2)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    int w = min(a, min(b, c));
    cout << w << endl;

    int ia = 0, ib = 0, ic = 0;
    int mrr[w][3];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 && ia < w)
        {
            mrr[ia][0] = i + 1;
            ia++;
        }
        else if (arr[i] == 2 && ib < w)
        {
            mrr[ib][1] = i + 1;
            ib++;
        }
        else if (arr[i] == 3 && ic < w)
        {
            mrr[ic][2] = i + 1;
            ic++;
        }
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mrr[i][j] << " ";
        }
        cout << endl;
    }
}
