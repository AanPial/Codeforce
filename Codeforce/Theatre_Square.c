#include<stdio.h>
#include<math.h>

int main() {
    long long int n, m, a;
    scanf("%lld%lld%lld", &n, &m, &a);

    double x = (double)n / a;
    double y = (double)m / a;
    long long int z = ceil(x) * ceil(y);
    printf("%lld\n", z);

    return 0;
}