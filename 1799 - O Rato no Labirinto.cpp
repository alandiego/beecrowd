#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

using vi = vector<int>;

int V, E;
map<string, int> indx;
vector<vi> AL;

int bfs(int s, int d) {
    vi dist(V, INF);
    queue<int> q;

    dist[s] = 0;
    q.push(s);

    while (!q.empty()) {
        int u = q.front(); q.pop();

        for (auto v : AL[u]) {
            if (dist[v] != INF) continue;

            dist[v] = dist[u] + 1;
            if (v == d) return dist[v];

            q.push(v);
        }
    }

    return INF; // segurança
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> V >> E;

    AL.assign(V, vi());

    int id = 0;

    for (int i=0; i<E; i++) {
        string a, b;
        cin >> a >> b;

        if (!indx.count(a)) indx[a] = id++;
        if (!indx.count(b)) indx[b] = id++;

        int u = indx[a];
        int v = indx[b];

        AL[u].push_back(v);
        AL[v].push_back(u);
    }

    int entrada = indx["Entrada"];
    int queijo  = indx["*"];
    int saida   = indx["Saida"];

    int ans = bfs(entrada, queijo) + bfs(queijo, saida);

    cout << ans << "\n";

    return 0;
}
