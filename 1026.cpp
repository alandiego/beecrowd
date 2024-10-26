#include <stdio.h>

int main()
{
    long long int x, y, result;
    while (scanf("%lld%lld", &x, &y)!= EOF){
        result = x ^ y;
        printf("%lld\n", result);
    }

    return 0;
}
