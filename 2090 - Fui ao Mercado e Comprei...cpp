#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    
    long long N, K;
    
    while (cin >> N >> K && N && K) {
        vector<string> palavras(N);
        for (int i = 0; i < N; i++) {
            cin >> palavras[i];
        }

        // Procurar menor i tal que i*(i+1)/2 >= K
        long long l = 1, r = N, ans = N;
        while (l <= r) {
            long long mid = (l + r) / 2;
            if (mid * (mid + 1) / 2 >= K) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        // Quantidade de palavras ditas antes da rodada `ans`
        long long total_anterior = (ans - 1) * ans / 2;
        // índice da palavra é K - total_anterior - 1
        cout << palavras[K - total_anterior - 1] << '\n';
    }

    return 0;
}
