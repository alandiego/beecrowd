#include <bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;

    while (C--) {
        int B, E;
        cin >> B >> E;

        string saida = "";
        for (int i = B; i <= E; i++) {
            saida += to_string(i);
        }

        cout << saida;
        reverse(saida.begin(), saida.end());
        cout << saida << '\n';
    }

    return 0;
}
