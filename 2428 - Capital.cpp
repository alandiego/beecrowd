#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> A(4);
    for (int i = 0; i < 4; i++) cin >> A[i];

    bool ok = false;

    // testa todas as escolhas de diagonal
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {

            vector<int> B;

            // pega os outros dois elementos
            for (int k = 0; k < 4; k++) {
                if (k != i && k != j)
                    B.push_back(A[k]);
            }

            // verifica a condição
            if (A[i] * A[j] == B[0] * B[1]) {
                ok = true;
            }
        }
    }

    cout << (ok ? "S\n" : "N\n");

    return 0;
}
