#include <bits/stdc++.h>
using namespace std;


int N; // número de torneios
int M; // número de posições possíveis (alunos)

vector<vector<int>> combinacoes;

void gerar(int pos, vector<int>& atual) {
    if (pos == N) {
        combinacoes.push_back(atual);
        return;
    }
    for (int i = 1; i <= M; ++i) {
        atual[pos] = i;
        gerar(pos + 1, atual);
    }
}

//verifica se A e B não tem posições repetidas
bool verifica_combinacoes(int i, int j){
    for (int k=0; i < N; i++){
        if (combinacoes[i][k]==combinacoes[j][k])
            return false;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> N >> M){
        vector<long long> coeficiente(N);
        vector<int> atual(N);
        multimap<long long, int> pontuacao;
        bool denis = true; // deu certo
        int ok;
        
        for (int i=0; i<N; i++)
            cin >> coeficiente[i];
        
        gerar(0, atual);
        
        for (size_t i = 0; i < combinacoes.size(); ++i) {
            long long soma_pontuacao = 0; // soma da pontuacao
            for (int j =0; j < combinacoes[i].size(); j++) {
                soma_pontuacao +=  combinacoes[i][j] * coeficiente[j];
            }
            
            auto mesma_pontuacao = pontuacao.equal_range(soma_pontuacao);
            
            ok = false;
            for (auto j = mesma_pontuacao.first; j != mesma_pontuacao.second; ++j){
                if (verifica_combinacoes(i, j->second))
                        ok = true;
                
            }
            
            if (ok && pontuacao.contains(soma_pontuacao)){
                denis = false;
                break;
            }
            
            pontuacao.insert({soma_pontuacao , i});
        }
        
        if (denis)
            cout << "Lucky Denis!\n";
        else
            cout << "Try again later, Denis...\n";
        
        pontuacao.clear();
        combinacoes.clear();
    }

    
    return 0;
}
