#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int G, P;

    while (cin >> G >> P && (G || P)) {
        vvi grandes_premios(G, vi(P));

        // Leitura dos resultados dos Grandes Prêmios
        for (int i = 0; i < G; ++i) {
            for (int j = 0; j < P; ++j) {
                cin >> grandes_premios[i][j];
            }
        }

        int S;
        cin >> S;

        while (S--) {
            int K;
            cin >> K;

            vi pontuacao(K);
            for (int i = 0; i < K; ++i)
                cin >> pontuacao[i];

            vi pontos(P, 0);

            // Calcular pontuação dos pilotos neste sistema
            for (int g = 0; g < G; ++g) {
                for (int p = 0; p < P; ++p) {
                    int colocacao = grandes_premios[g][p];
                    if (colocacao <= K) {
                        pontos[p] += pontuacao[colocacao - 1];
                    }
                }
            }

            // Determinar os campeões (com maior pontuação)
            int maior = *max_element(pontos.begin(), pontos.end());
            bool primeiro = true;
            for (int i = 0; i < P; ++i) {
                if (pontos[i] == maior){
                    if (!primeiro ){
                        cout << " ";
                    }
                    cout << (i + 1);
                    primeiro = false;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
