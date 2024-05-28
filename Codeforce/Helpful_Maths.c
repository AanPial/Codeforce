#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100];
    gets(str);
    int n = strlen(str);
    char temp;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = i + 2; j < n; j=j+2)
            {
                if (str[i] > str[j])
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }
    printf("%s", str);
}