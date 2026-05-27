#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using pii = pair<int,int>;

const int INF = 0x3f3f3f3f;

int V, E;
int s, t;

vector<vector<pii>> AL;
vector<vector<bool>> removed;
vector<vi> parents;

vi dijkstra() {
    vi dist(V, INF);
    dist[s] = 0;

    priority_queue<pii, vector<pii>, greater<>> pq;
    pq.push({0, s});

    parents.assign(V, vi());

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();

        if (d > dist[u]) continue;

        for (int i = 0; i < AL[u].size(); i++) {
            if (removed[u][i]) continue;

            auto [v, w] = AL[u][i];

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});

                parents[v].clear();
                parents[v].push_back(u);
            }
            else if (dist[v] == dist[u] + w) {
                parents[v].push_back(u);
            }
        }
    }

    return dist;
}

void removePath() {
    queue<int> q;
    vector<bool> vis(V, false);

    q.push(t);
    vis[t] = true;

    while (!q.empty()) {
        int u = q.front(); q.pop();

        for (auto v : parents[u]) {

            for (int i = 0; i < (int)AL[v].size(); i++) {
                if (AL[v][i].first == u)
                    removed[v][i] = true;
            }

            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> V >> E && (V || E)) {

        cin >> s >> t;

        AL.assign(V, {});
        removed.assign(V, {});

        int u, v, w;
        for (int i = 0; i < E; i++) {
            cin >> u >> v >> w;
            AL[u].push_back({v, w});
        }

        for (int i = 0; i < V; i++)
            removed[i].assign(AL[i].size(), false);

        vi dist = dijkstra();

        if (dist[t] == INF) {
            cout << "-1\n";
            continue;
        }

        removePath();

        dist = dijkstra();

        if (dist[t] == INF) cout << "-1\n";
        else cout << dist[t] << "\n";
    }

    return 0;
}
