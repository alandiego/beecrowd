#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 1300031;

ll soma(ll x) {
    return (x * (x + 1) / 2) % MOD;
}

ll soma_multiplos(ll I, ll F, ll m) {
    ll L = (I + m - 1) / m;
    ll R = F / m;

    if (L > R) return 0;

    ll sumK = (soma(R) - soma(L - 1) + MOD) % MOD;
    return (m % MOD) * sumK % MOD;
}

ll lcm_safe(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;

    while (T--) {
        ll I, F, N;
        cin >> I >> F >> N;

        vector<ll> v(N);
        for (int i = 0; i < N; i++) cin >> v[i];

        ll ans = 0;

        for (int mask = 1; mask < (1 << N); mask++) {
            ll lcm = 1;
            bool ok = true;
            int bits = 0;

            for (int i = 0; i < N; i++) {
                if (mask & (1 << i)) {
                    bits++;
                    lcm = lcm_safe(lcm, v[i]);
                    if (lcm > F) {
                        ok = false;
                        break;
                    }
                }
            }

            if (!ok) continue;

            ll val = soma_multiplos(I, F, lcm);

            if (bits % 2 == 1)
                ans = (ans + val) % MOD;
            else
                ans = (ans - val + MOD) % MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}
