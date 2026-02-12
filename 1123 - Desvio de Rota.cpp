#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int INF = 1e9;

vi dist;
int V, M, C, K;
vector<vii> AL;

void dijkstra(int s) {
    set<ii> pq;
    for (int u = 0; u < V; ++u)
        pq.emplace(dist[u], u);

    while (!pq.empty()) {
        auto [d, u] = *pq.begin();
        pq.erase(pq.begin());

        if (d > dist[u]) continue;

        for (auto &[v, w] : AL[u]) {
            if (dist[u] + w >= dist[v]) continue;
            pq.erase(pq.find({dist[v], v}));
            dist[v] = dist[u] + w;
            pq.emplace(dist[v], v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> V >> M >> C >> K && V) {

        AL.assign(V, vii());
        dist.assign(V, INF);
        dist[K] = 0;

        while (M--) {
            int u, v, w;
            cin >> u >> v >> w;

            // fora da rota: estrada normal
            if (u >= C && v >= C) {
                AL[u].push_back({v, w});
                AL[v].push_back({u, w});
            }
            // u fora, v na rota: pode entrar
            else if (u >= C && v < C) {
                AL[u].push_back({v, w});
            }
            // v fora, u na rota: pode entrar
            else if (v >= C && u < C) {
                AL[v].push_back({u, w});
            }
            // ambos na rota
            else {
                // só permite seguir a rota
                if (abs(u - v) == 1) {
                    if (u + 1 == v)
                        AL[u].push_back({v, w});
                    else if (v + 1 == u)
                        AL[v].push_back({u, w});
                }
            }
        }

        dijkstra(K);

        cout << dist[C - 1] << "\n";
    }

    return 0;
}
