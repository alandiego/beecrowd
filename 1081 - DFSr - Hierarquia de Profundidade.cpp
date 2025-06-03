#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

const int MAX_V = 22;
int N, V, E;
int g[MAX_V][MAX_V];

enum { UNVISITED = -1, VISITED = -2 };
vi dfs_num;

bool pathR(int v, int tab) {
    dfs_num[v] = VISITED;
    bool path = false;
    for (int w = 0; w < V; ++w) {
        if (g[v][w]) {
            path = true;
            cout << string(tab, ' ');
            cout << v << '-' << w;
            if (dfs_num[w] == UNVISITED) {
                cout << " pathR(G," << w << ")\n";
                pathR(w, tab + 2);
            } else {
                cout << '\n';
            }
            
        }
    }
    return path;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    int TC = 0;

    while (N--) {
        cin >> V >> E;
        memset(g, 0, sizeof(g));

        for (int i = 0; i < E; ++i) {
            int u, v;
            cin >> u >> v;
            g[u][v] = 1;
        }

        cout << "Caso " << ++TC << ":\n";

        dfs_num.assign(V, UNVISITED);
        bool printed = false;

        for (int u = 0; u < V; ++u) {
            if (dfs_num[u] == UNVISITED) {
                if (pathR(u, 2)) cout << '\n';
            }
        }
    }

    return 0;
}
