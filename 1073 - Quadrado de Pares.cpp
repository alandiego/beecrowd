#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    // Para cada número de 2 até N (com passo 2, ou seja, só números pares)
    for (int i = 2; i <= N; i += 2) {
        cout << i << "^2 = " << i * i << "\n";  // Imprime o quadrado do número par
    }

    return 0;
}
