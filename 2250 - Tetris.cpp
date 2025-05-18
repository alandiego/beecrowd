#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int J, TC = 0;
    
    while (cin >> J && J) {
        vector<pair<int, string>> rank;
        vector<int> pontuacao(12);
        
        cout << "Teste " << ++TC << "\n";
        
        for (int i = 0; i < J; ++i) {
            string nome;
            cin >> nome;
            for (int j = 0; j < 12; ++j)
                cin >> pontuacao[j];
            sort(pontuacao.begin(), pontuacao.end());
            
            int soma = accumulate(pontuacao.begin() + 1, pontuacao.end() - 1, 0);
            rank.push_back({soma, nome});
        }

        // Ordena por pontuação decrescente, e em caso de empate, por nome crescente
        sort(rank.begin(), rank.end(), [](const pair<int, string> &a, const pair<int, string> &b) {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });

        int pontAnt = -1;
        int posAtual = 1;
        int cont = 1;

        for (auto &[pont, nome] : rank) {
            if (pont != pontAnt)
                posAtual = cont;
            cout << posAtual << " " << pont << " " << nome << "\n";
            pontAnt = pont;
            cont++;
        }

        cout << "\n";
    }

    return 0;
}
