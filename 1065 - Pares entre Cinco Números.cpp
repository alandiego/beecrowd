#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int par = 0, numero;

    for (int i = 0; i < 5; ++i) {
        cin >> numero;
        if (numero % 2 == 0) {
            par++;
        }
    }

    cout << par << " valores pares\n";

    return 0;
}
