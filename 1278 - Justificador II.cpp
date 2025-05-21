#include <bits/stdc++.h>

using namespace std;

// Função que remove espaços no início e fim e reduz múltiplos espaços internos
string normalizarEspacos(const string& s) {
    string resultado;
    int i = 0;

    // Pular espaços iniciais
    while (i < s.size() && isspace(s[i])) ++i;

    bool espacoAnterior = false;

    while (i < s.size()) {
        if (isspace(s[i])) {
            // Marcar que houve espaço, mas não adicionar ainda
            espacoAnterior = true;
        } else {
            // Se havia espaço antes, adiciona um só
            if (espacoAnterior && !resultado.empty()) {
                resultado += ' ';
                espacoAnterior = false;
            }
            resultado += s[i];
        }
        ++i;
    }

    // Remove espaço final, se houver
    if (!resultado.empty() && resultado.back() == ' ')
        resultado.pop_back();

    return resultado;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    bool primeiro = true;
    
    while (cin >> N && N){
        cin.ignore(); // Ignora o '\n' depois de N
        vector<string> palavras(N);
        int maior = 0;

        if (!primeiro)
            cout << "\n";

        for (int i = 0; i < N; ++i) {
            getline(cin, palavras[i]);
            palavras[i] = normalizarEspacos(palavras[i]);
            maior = max((int)palavras[i].size(), maior);
        }
        
        for (int i=0; i<N; ++i){
            for (int j=0; j<maior-palavras[i].size(); ++j)
                cout << ' ';
            cout << palavras[i] << "\n";
        }
        
        primeiro = false;
        
    }

    return 0;
}
