#include <iostream>
#include <string>
using namespace std;

struct reg
{
    string name;
    int I = 0;
};

int binarysearch(string name, struct reg *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    struct reg arr[n];
    int i = 0;

    while (n > 0)
    {
        cin >> arr[i].name;
        int c = binarysearch(arr[i].name, arr, i);

        if (c == -1)
        {
            cout << "OK" << endl;
        }
        else
        {
            arr[c].I += 1;
            arr[i].name = arr[c].name + to_string(arr[c].I);
            cout << arr[i].name << endl;
        }
        i++;
        n--;
    }

    return 0;
}
