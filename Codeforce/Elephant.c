#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    while (n > 1)
    {
        if (n >= 5)
        {
            c += (n / 5);
            n = n % 5;
        }
        else if (n >= 4)
        {
            c += (n / 4);
            n = n % 4;
        }
        else if (n >= 3)
        {
            c += (n / 3);
            n = n % 3;
        }
        else if (n >= 2)
        {
            c += (n / 2);
            n = n % 2;
        }
    }
    if (n == 1)
    {
        c += 1;
    }
    printf("%d", c);
}
