#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[n + 1]; 
    scanf("%s", str);

    int c = 0;
    for (int i = 0; i < n; i++) {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 || str[i] != str[i - 1]) {
            c++;
        }
    }
    if (c == 26) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
