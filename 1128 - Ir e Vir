#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

const int MAX_V = 2000; //quantidade Max de vértices

int grafo[MAX_V][MAX_V]; // é melhor declarar um array 2d grande como global

enum { UNVISITED = -1, VISITED = -2 };                     // basic flags

vi dfs_num; 

int N, M;

void dfs(int u) {                                // normal usage
    dfs_num[u] = VISITED;                          // mark u as visited
    for (int v=0; v < N; ++v)                     // C++17 style, w ignored
        if (grafo[u][v] != 0 && dfs_num[v] == UNVISITED)                 // to avoid cycle
            dfs(v);                                    // recursively visits v
}

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> N >> M && N && M){
        
        for (int u = 0; u < N; ++u)           
            for (int v = 0; v < N; ++v)       
                grafo[u][v] = 0;
        
        for (int i=0; i < M; ++i){
            int u, v, p;
            cin >> u >> v >> p;
            --u; --v;
            if (p==1)
                grafo[u][v] = 1;    //uma direcao
            else
                grafo[v][u] = grafo[u][v] = 1; //duas direcoes
        }
        
        bool resp = true;
        for (int u=0; u < N && resp; ++u){
            dfs_num.assign(N, UNVISITED);
            dfs(u);
            for (int v=0; v < N; ++v){
                if (dfs_num[v] == UNVISITED){
                    resp = false;
                    break;
                }
            }
        }
        
        if (resp)
            cout << "1\n";
        else
            cout << "0\n";
    }
    
    return 0;
}
