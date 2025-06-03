#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;  
          
vector<vi> AL;

enum { UNVISITED = -1, VISITED = -2 }; // basic flags
vi dfs_num; // initially all UNVISITED

void dfs(int u) { // normal usage
    dfs_num[u] = VISITED; // mark u as visited
    for (auto &v : AL[u]) // C++17 style, w ignored
        if (dfs_num[v] == UNVISITED) // to avoid cycle
            dfs(v); // recursively visits v
}

int find_index(const vector<string>& names, string name){
    auto it = find(names.begin(), names.end(), name);
    return (it == names.end()) ? -1 : it - names.begin(); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int M; // vertices, qtd nomes diferentes
    int N; // arestas, relacoes de parentesco
    cin >> M >> N;
    
    AL.assign(M, vi());
    vector<string> names;
    
    for (int u = 0; u < N; ++u) {
        string name1, relationship, name2;
        cin >> name1 >> relationship >> name2;
        
        int name1_index = find_index(names, name1);
        int name2_index = find_index(names, name2);
        
        if (name1_index==-1){
            names.push_back(name1);
            name1_index = names.size()-1;
        }
        if (name2_index==-1){
            names.push_back(name2);
            name2_index = names.size()-1;
        }
        
        AL[name1_index].emplace_back(name2_index);
        AL[name2_index].emplace_back(name1_index);
    }
    
    dfs_num.assign(M, UNVISITED);
    int numCC = 0;
    for (int u = 0; u < M; ++u) // for each u in [0..V-1]
        if (dfs_num[u] == UNVISITED) { // if that u is unvisited
            ++numCC;
            dfs(u);
        }
    cout << numCC << "\n";
    
    return 0;
}

