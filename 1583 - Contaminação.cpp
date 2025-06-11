#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 52;
const int MAX_M = 52;

char grafo[MAX_N][MAX_M];
int dfs_num[MAX_N][MAX_M]; 

enum { UNVISITED = -1, VISITED = -2 };                     // basic flags

int N, M;

void dfs(int u, int v) {                              
    dfs_num[u][v] = VISITED;
    
    if (dfs_num[u-1][v]==UNVISITED && grafo[u-1][v]=='A'){
        grafo[u-1][v]='T';
        dfs(u-1, v);
    }
    
    if (dfs_num[u+1][v]==UNVISITED && grafo[u+1][v]=='A'){
        grafo[u+1][v]='T';
        dfs(u+1, v);
    }
    
    if (dfs_num[u][v-1]==UNVISITED && grafo[u][v-1]=='A'){
        grafo[u][v-1]='T';
        dfs(u, v-1);
    }
    
    if (dfs_num[u][v+1]==UNVISITED && grafo[u][v+1]=='A'){
        grafo[u][v+1]='T';
        dfs(u, v+1);
    }
}

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> N >> M && N && M){
        
        for (int u = 1; u <= N; ++u){           
            for (int v = 1; v <= M; ++v){
                grafo[u][v] = 'X';
                dfs_num[u][v] = UNVISITED;
            }      
        }   
        for (int u = 1; u <= N; ++u)           
            for (int v = 1; v <= M; ++v)       
                cin >> grafo[u][v];
        
        for (int u = 1; u <= N; ++u){           
            for (int v = 1; v <= M; ++v){
                if (dfs_num[u][v]==UNVISITED && grafo[u][v]=='T')
                    dfs(u, v);
            }
        }
        
        for (int u = 1; u <= N; ++u){           
            for (int v = 1; v <= M; ++v){
                cout << grafo[u][v];
            }
            cout << "\n";
        }
        
        cout << "\n";
    }
    
    return 0;
}
