#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long X, M;

    while (scanf("%llu %llu", &X, &M) == 2 && (X || M)) {
        printf("%llu\n", X * M);
    }

    return 0;
}
