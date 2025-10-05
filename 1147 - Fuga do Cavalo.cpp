#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1, n;
    char c;

    // movimentos possíveis do cavalo
    int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

    while (cin >> n && n) {
        cin >> c;
        pair<int,int> knight = {n, c - 'a'};

        vector<pair<int,int>> pieces(8);
        for (int i = 0; i < 8; i++) {
            cin >> n >> c;
            pieces[i] = {n, c - 'a'};
        }

        int moves = 0;

        // testar os 8 movimentos possíveis do cavalo
        for (int k = 0; k < 8; k++) {
            int x = knight.first + dx[k];
            int y = knight.second + dy[k];

            if (x < 1 || x > 8 || y < 0 || y >= 8)
                continue; // fora do tabuleiro

            bool valid = true;

            // verificar se alguma peça ameaça a nova posição
            for (auto &p : pieces) {
                int px = p.first - 1;
                int py = p.second;
                if (px == x && (y == py + 1 || y == py - 1)) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                moves++;
        }

        cout << "Caso de Teste #" << T++ << ": " << moves << " movimento(s).\n";
    }

    return 0;
}
