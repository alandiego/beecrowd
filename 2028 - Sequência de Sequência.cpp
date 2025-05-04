#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int caso = 1;
    int N;
    
    vector<int> sequencia = {0, 1};
    // Monta a sequência conforme o padrão fornecido
    for (int i = 2; i <= 200; i++) {
        for (int j = 0; j < i; j++) {
            sequencia.push_back(i);
        }
    }

    while (cin >> N) {
        // Calcula a quantidade total de números da sequência
        int quantidade = 0;
    
        // Calcula a quantidade de números na sequência
        quantidade = lower_bound(sequencia.begin(), sequencia.end(), N+1)-sequencia.begin();

        // Imprime o caso e a quantidade de números
        cout << "Caso " << caso << ": " << quantidade;
        if (quantidade==1)
            cout << " numero\n";
        else
            cout << " numeros\n";
        caso++;

        // Imprime a sequência
        for (int i = 0; i < quantidade; i++) {
            cout << sequencia[i];
            if (i != quantidade - 1) cout << " ";
        }

        // Linha em branco após cada caso
        cout << "\n\n";
    }

    return 0;
}
