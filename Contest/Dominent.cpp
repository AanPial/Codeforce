#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+m);

        int c = 1, u = 1;
        for (int i = 1; i < m; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                u++;
            }
        }

        int mrr[u];
        int j = 0;
        c = 1;
        for (int i = 1; i < m; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                c++;
            }
            else
            {
                mrr[j++] = c;
                c = 1;
            }
        }
        mrr[j] = c;

        int max = mrr[0];
        for (int i = 1; i < u; i++)
        {
            if (mrr[i] > max)
            {
                max = mrr[i];
            }
        }

        int cmax = 0;
        for (int i = 0; i < u; i++)
        {
            if (max == mrr[i])
            {
                cmax++;
            }
        }

        if (cmax == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
