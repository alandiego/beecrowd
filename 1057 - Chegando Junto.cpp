#include <bits/stdc++.h>
using namespace std;

char board[10][10];
int N;

// Direções: Norte, Leste, Sul, Oeste
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

struct State {
    int ax, ay, bx, by, cx, cy;
};

// visited[a][b][c][d][e][f]
// Marca se já visitamos o estado
// (A em a,b) (B em c,d) (C em e,f)
bool visited[10][10][10][10][10][10];

// Verifica se a posição é válida (dentro do tabuleiro e não é parede)
bool valid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N && board[x][y] != '#';
}

// Verifica se os três estão sobre células alvo 'X'
bool goal(State s) {
    return board[s.ax][s.ay] == 'X' &&
           board[s.bx][s.by] == 'X' &&
           board[s.cx][s.cy] == 'X';
}

int bfs(State start) {

    // Limpa estados visitados
    memset(visited, false, sizeof(visited));

    // Fila de BFS: (estado, distância)
    queue<pair<State,int>> q;

    visited[start.ax][start.ay][start.bx][start.by][start.cx][start.cy] = true;
    q.push({start, 0});

    while (!q.empty()) {

        auto [cur, dist] = q.front();
        q.pop();

        // Se chegou no objetivo, retorna número de movimentos
        if (goal(cur)) return dist;

        // Testa as 4 direções possíveis
        for (int d = 0; d < 4; d++) {

            // Cada jogador tenta mover na mesma direção
            int nax = cur.ax + dx[d];
            int nay = cur.ay + dy[d];
            int nbx = cur.bx + dx[d];
            int nby = cur.by + dy[d];
            int ncx = cur.cx + dx[d];
            int ncy = cur.cy + dy[d];

            // Verifica se o movimento é válido (não é parede)
            bool moveA = valid(nax, nay);
            bool moveB = valid(nbx, nby);
            bool moveC = valid(ncx, ncy);

            // Posição final inicial (se não puder mover, fica parado)
            int fax = moveA ? nax : cur.ax;
            int fay = moveA ? nay : cur.ay;
            int fbx = moveB ? nbx : cur.bx;
            int fby = moveB ? nby : cur.by;
            int fcx = moveC ? ncx : cur.cx;
            int fcy = moveC ? ncy : cur.cy;

            // Se dois tentarem ocupar a mesma célula,
            // ambos perdem o movimento
            if (fax == fbx && fay == fby) {
                moveA = moveB = false;
            }
            if (fax == fcx && fay == fcy) {
                moveA = moveC = false;
            }
            if (fbx == fcx && fby == fcy) {
                moveB = moveC = false;
            }

            // Recalcula posição final após resolver conflitos
            fax = moveA ? nax : cur.ax;
            fay = moveA ? nay : cur.ay;
            fbx = moveB ? nbx : cur.bx;
            fby = moveB ? nby : cur.by;
            fcx = moveC ? ncx : cur.cx;
            fcy = moveC ? ncy : cur.cy;

            // Se ainda houver colisão final, ignora estado
            if (fax == fbx && fay == fby) continue;
            if (fax == fcx && fay == fcy) continue;
            if (fbx == fcx && fby == fcy) continue;

            State nxt = {fax, fay, fbx, fby, fcx, fcy};

            // Se ainda não visitamos esse estado, adiciona na fila
            if (!visited[nxt.ax][nxt.ay][nxt.bx][nxt.by][nxt.cx][nxt.cy]) {
                visited[nxt.ax][nxt.ay][nxt.bx][nxt.by][nxt.cx][nxt.cy] = true;
                q.push({nxt, dist + 1});
            }
        }
    }

    // Se esgotar a BFS e não achar solução
    return -1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {

        cin >> N;

        State start;

        // Leitura do tabuleiro
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> board[i][j];

                // Guarda posição inicial dos jogadores
                if (board[i][j] == 'A') {
                    start.ax = i;
                    start.ay = j;
                }
                if (board[i][j] == 'B') {
                    start.bx = i;
                    start.by = j;
                }
                if (board[i][j] == 'C') {
                    start.cx = i;
                    start.cy = j;
                }
            }
        }

        int ans = bfs(start);

        cout << "Case " << tc << ": ";
        if (ans == -1) cout << "trapped\n";
        else cout << ans << "\n";
    }
}
