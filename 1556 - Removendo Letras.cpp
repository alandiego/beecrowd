#include <bits/stdc++.h>
using namespace std;

set<string> result;
string s;

void backtrack(const string &atual) {
    // se já processamos essa string, não faz nada
    if (result.count(atual)) return;

    result.insert(atual);
    
    //impedi inserir string vazia
    if (atual.size()==1) return;

    // gera novos subconjuntos removendo 1 caractere
    for (int i = 0; i < atual.size(); i++) {
        string prox = atual;
        prox.erase(prox.begin() + i);
        backtrack(prox);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> s) {
        result.clear();

        backtrack(s);

        for (const auto &x : result) {
            cout << x << '\n';
        }
        cout << '\n';
    }

    return 0;
}
