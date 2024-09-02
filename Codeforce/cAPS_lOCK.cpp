#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[101]; // Increased size to handle edge cases
    cin >> str;

    int x = 1, y = 0, z = 1;

    // Check if all characters are uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            x = 0;
            break;
        }
    }

    // Check if the first character is lowercase
    if (islower(str[0])) {
        y = 1;
    }

    // Check if all characters except the first one are uppercase
    for (int i = 1; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            z = 0;
            break;
        }
    }

    // Convert based on the conditions
    if (x == 1) { // All characters are uppercase
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
    } else if (y == 1 && z == 1) { // First is lowercase, rest are uppercase
        str[0] = toupper(str[0]);
        for (int i = 1; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}
