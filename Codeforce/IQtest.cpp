#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int cEven = 0, cOdd = 0;

    // Count number of even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cEven++;
        } else {
            cOdd++;
        }
    }
    
    // Find and print the index of the differing element
    if (cEven > cOdd) {
        // More even numbers, find the odd one
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                cout << i + 1 << endl;  // Print index + 1
                break;
            }
        }
    } else {
        // More odd numbers, find the even one
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                cout << i + 1 << endl;  // Print index + 1
                break;
            }
        }
    }

    return 0;
}
