#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int X, Y;
    cin >> X >> Y;

    // Garantir que X seja o menor e Y seja o maior valor
    if (X > Y) {
        swap(X, Y);
    }
    
    //não incluir X
    X++;

    int sum = 0;
    
    // Iniciar no próximo número ímpar depois de X (se X for par, comece no X+1)
    if (X % 2 == 0) {
        X++;
    }

    // Soma os ímpares entre X e Y
    for (int i = X; i < Y; i += 2) {
        sum += i;
    }

    cout << sum << "\n";

    return 0;
}
