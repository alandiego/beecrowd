#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    while (cin >> N) {
        int custo;
        cin >> custo;

        int melhor = 0;
        int atual = 0;

        for (int i = 0; i < N; i++) {
            int receita;
            cin >> receita;

            int lucroDia = receita - custo;
            atual = max(0, atual + lucroDia);
            melhor = max(melhor, atual);
        }

        cout << melhor << "\n";
    }

    return 0;
}
