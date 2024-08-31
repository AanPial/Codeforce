#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    int sum = 0, count = 0,j=n-1;
    int count2=0,count1=0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 4)
        {
            count++;
        } 
        else if (arr[i] == 3) {
            if (arr[j] == 1)
            {
                arr[j] = 0;
                j--;
            }
            count++;
        } 
        else if (arr[i] == 2)
        {
            count2++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            continue;
        }
    }
    count=count+(count2/2);
    count2 %= 2;
    if (count2 > 0)
    {
        if (count1 >= 2)
        {
            count += 1;
            count1 -= 2;
        }
        else if (count1 == 1)
        {
            count += 1;
            count1 -= 1;
        }
        else
        {
            count += 1;
        }
    }
    count=count+(count1/4);
    if (count1 % 4 != 0)
    {
        count += 1;
    }
    cout << count << endl;
    return 0;
}
