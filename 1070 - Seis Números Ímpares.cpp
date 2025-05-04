#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int X;
    cin >> X;

    // Se X for par, o próximo ímpar é X + 1
    if (X % 2 == 0) {
        X++;
    }

    // Imprime os 6 primeiros números ímpares a partir de X
    for (int i = 0; i < 6; i++) {
        cout << X + (i * 2) << "\n";
    }

    return 0;
}
