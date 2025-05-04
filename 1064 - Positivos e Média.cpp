#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int positivo = 0;
    double soma = 0, numero;

    for (int i = 0; i < 6; ++i) {
        cin >> numero;
        if (numero > 0) {
            positivo++;
            soma += numero;
        }
    }

    cout << positivo << " valores positivos\n";
    cout << fixed << setprecision(1) << soma / positivo << "\n";

    return 0;
}
