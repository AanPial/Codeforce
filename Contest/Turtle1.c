#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        char s[k + 1];
        scanf("%s", s);
        if (s[0] != s[k - 1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
