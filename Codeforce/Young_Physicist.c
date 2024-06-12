#include <stdio.h>
struct vector
{
    int arr[3];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct vector vc[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             scanf("%d",&vc[i].arr[j]);
        }
    }
    int s[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i] += vc[j].arr[i];
        }
    }
    if (s[0] == 0 && s[1] == 0 && s[2] == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}