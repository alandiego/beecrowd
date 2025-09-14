#include <bits/stdc++.h>
using namespace std;

struct Camisa {
    string nome;
    string cor;
    string tamanho;
};

// comparação personalizada
bool comp(const Camisa &a, const Camisa &b) {
    if (a.cor != b.cor) return a.cor < b.cor; // branco antes de vermelho
    
    if (a.tamanho != b.tamanho) {
        // ordem decrescente: G > M > P
        return a.tamanho > b.tamanho;
    }
    
    return a.nome < b.nome; // ordem alfabética
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    bool firstCase = true;
    while (cin >> N && N) {
        if (!firstCase) cout << "\n"; // linha em branco entre casos
        firstCase = false;

        vector<Camisa> v;
        cin.ignore(); // limpar \n depois de ler N

        for (int i = 0; i < N; i++) {
            Camisa c;
            getline(cin, c.nome);
            cin >> c.cor >> c.tamanho;
            cin.ignore();
            v.push_back(c);
        }

        sort(v.begin(), v.end(), comp);

        for (auto &c : v) {
            cout << c.cor << " " << c.tamanho << " " << c.nome << "\n";
        }
    }

    return 0;
}
