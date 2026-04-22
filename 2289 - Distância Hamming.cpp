#include <stdio.h>

int main()
{
    unsigned long long x, y;

    while (scanf("%llu %llu", &x, &y) && (x != 0 || y != 0)) {
        int result = __builtin_popcountll(x ^ y);
        printf("%d\n", result);
    }

    return 0;
}
