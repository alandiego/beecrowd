#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int par = 0, impar = 0, positivo = 0, negativo = 0, numero;

    // Leitura dos 5 valores
    for (int i = 0; i < 5; ++i) {
        cin >> numero;
        
        // Contagem de pares e ímpares
        if (numero % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        // Contagem de positivos e negativos
        if (numero > 0) {
            positivo++;
        } else if (numero < 0) {
            negativo++;
        }
    }

    // Exibição dos resultados
    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << positivo << " valor(es) positivo(s)\n";
    cout << negativo << " valor(es) negativo(s)\n";

    return 0;
}
