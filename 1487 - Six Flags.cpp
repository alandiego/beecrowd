#include <bits/stdc++.h>

using namespace std;

#define MAXN 105
#define MAXT 605

int n, t;

int D[MAXN], P[MAXN];
int dp[MAXT];

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int TC = 1;

    while (cin >> n >> t && n) {

        for (int i = 0; i < n; i++) {
            cin >> D[i] >> P[i];
        }

        memset(dp, 0, sizeof(dp));

        for (int i = 0; i <= t; i++) {
            for (int j = 0; j < n; j++) {
                if (D[j] <= i)
                    dp[i] = max(dp[i], dp[i - D[j]] + P[j]);
            }
        }

        cout << "Instancia " << TC++ << "\n";
        cout << dp[t] << "\n\n";
    }
}
