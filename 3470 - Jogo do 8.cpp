#include<bits/stdc++.h>

using namespace std;

const string target = "123456780";

// Direções: cima, baixo, esquerda, direita
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

// Verifica se a configuração é solucionável
bool isSolvable(const string& s) {
    int inv = 0;
    for (int i = 0; i < 9; i++) {
        if (s[i] == '0') continue;
        for (int j = i + 1; j < 9; j++) {
            if (s[j] != '0' && s[i] > s[j])
                inv++;
        }
    }
    return inv % 2 == 0;
}

// Retorna o número mínimo de movimentos
int bfs(const string& start) {
    if (!isSolvable(start)) return -1;

    unordered_set<string> visited;
    queue<pair<string, int>> q;
    q.push({start, 0});
    visited.insert(start);

    while (!q.empty()) {
        auto [state, steps] = q.front();
        q.pop();

        if (state == target) return steps;

        int pos = state.find('0');
        int x = pos / 3;
        int y = pos % 3;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
                int newPos = nx * 3 + ny;
                string next = state;
                swap(next[pos], next[newPos]);
                if (!visited.count(next)) {
                    visited.insert(next);
                    q.push({next, steps + 1});
                }
            }
        }
    }

    return -1; // não solucionável (segurança extra)
}

int main() {
    string input, s = "";
    int n;
    for (int i = 0; i < 9; i++) {
        cin >> n;
        s += (char)(n + '0');
    }

    cout << bfs(s) << endl;
    return 0;
}
