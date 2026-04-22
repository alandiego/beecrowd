#include <bits/stdc++.h>

using namespace std;

const long long INF = 0x3f3f3f3f3f3f3f3f;

int S, B;

int X[255];      // slots
int Y[130];      // balls
int sum[255];    // pair sums

long long dp[130][255];

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> S >> B && (S || B)) {

        for (int i=0; i<S; i++) cin >> X[i];
        for (int i=0; i<B; i++) cin >> Y[i];

        // soma dos pares (circular)
        for (int i=0; i<S; i++)
            sum[i] = X[i] + X[(i+1)%S];

        long long ans = -INF;

        // fixa posição da primeira bola
        for (int i=0; i<S; i++) {

            long long first = -1LL * Y[0] * sum[i];

            if (B == 1) {
                ans = max(ans, first);
                continue;
            }

            // cria vetor linear dos pares restantes
            vector<int> v;
            for (int j=2; j<=S-2; j++)
                v.push_back(sum[(i+j)%S]);

            int n = v.size();

            // dp[b][j] -> bola b começando em j
            for (int b=0; b<=B; b++)
                for (int j=0; j<=n; j++)
                    dp[b][j] = -INF;

            // última bola
            for (int j=n-1; j>=0; j--) {
                long long val = -1LL * Y[B-1] * v[j];

                if (j+1 < n)
                    dp[B-1][j] = max(dp[B-1][j+1], val);
                else
                    dp[B-1][j] = val;
            }

            // demais bolas
            for (int b=B-2; b>=1; b--) {
                for (int j=n-1; j>=0; j--) {

                    if (j+1 < n)
                        dp[b][j] = dp[b][j+1];

                    if (j+2 <= n) {
                        long long val = -1LL * Y[b] * v[j];
                        if (dp[b+1][j+2] != -INF)
                            dp[b][j] = max(dp[b][j],
                                           val + dp[b+1][j+2]);
                    }
                }
            }

            if (dp[1][0] != -INF)
                ans = max(ans, first + dp[1][0]);
        }

        cout << ans << "\n";
    }

    return 0;
}
