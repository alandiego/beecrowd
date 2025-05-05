#include <bits/stdc++.h>

using namespace std;


int consulta(int x, vector<int> &bancos){
    //verifica se ja ocorreu alguma fusão e atualiza para o menor indice
    if(bancos[x] != x)
        bancos[x] = consulta(bancos[x], bancos);
    return bancos[x];
}

void fusao(int banco1, int banco2, vector<int> &bancos){
    int a = consulta(banco1, bancos);
    int b = consulta(banco2, bancos);
    if (a!=b)
        bancos[b] = a;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    char op;
    int banco1, banco2;
    cin >> N >> K;
    
    vector<int> bancos;
    
    //indice indica o banco, valor indica menor rank nas fusoes;
    for (int i=0; i<=N; i++)
        bancos.push_back(i);
        
    while (K--){
        cin >> op >> banco1 >> banco2;
        
        if (op == 'F'){
            fusao(banco1, banco2, bancos);
        } else {
            if (consulta(banco1, bancos) == consulta(banco2, bancos))
                cout << "S\n";
            else
                cout << "N\n";
        }
    }

    return 0;
}
