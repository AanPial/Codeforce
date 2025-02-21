#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int brr[n];
    int crr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> crr[i];
    }

    int xrr[n];
    for (int i = 0; i < n; i++) {
        xrr[i] = brr[crr[i] - 1];
    }

    sort(arr, arr + n);
    sort(xrr, xrr + n);

    int tableA[n + 1], tableB[n + 1];
    for (int i = 0; i <= n; i++) {
        tableA[i] = 0;
        tableB[i] = 0;
    }

    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || arr[i] != arr[i + 1]) {
            tableA[arr[i]] = count;
            count = 1;
        } else {
            count++;
        }
    }

    count = 1;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || xrr[i] != xrr[i + 1]) {
            tableB[xrr[i]] = count;
            count = 1;
        } else {
            count++;
        }
    }

    long long pr = 0;
    for (int i = 0; i <= n; i++) {
        pr += (tableA[i] * tableB[i]);
    }

    cout << pr << endl;
}
