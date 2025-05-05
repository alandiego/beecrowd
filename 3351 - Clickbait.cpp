#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N, K;

vector<pair<ll, ll>> pessoas;

// Retorna quantas visualizações ocorreram até o tempo T
ll totalVisualizacoes(ll T) {
    ll total = 0;
    for (auto [a, b] : pessoas) {
        if (T >= a)
            total += (T - a) / b + 1;
        // se T < a, essa pessoa ainda não assistiu
        if (total >= K) break; // otimização: para de contar se já alcançou
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    pessoas.resize(N);
    for (int i = 0; i < N; i++)
        cin >> pessoas[i].first >> pessoas[i].second;

    ll lo = 1, hi = 2e18, answer = -1;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (totalVisualizacoes(mid) >= K) {
            answer = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << answer << '\n';
    return 0;
}
