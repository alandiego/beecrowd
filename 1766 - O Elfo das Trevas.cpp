#include <bits/stdc++.h>
using namespace std;

typedef struct rena{
    string nome;
    int peso;
    int idade;
    double altura;
}Rena;

bool compara(rena a, rena b){
    if (a.peso != b.peso)
        return a.peso > b.peso;
    if (a.idade != b.idade)
        return a.idade < b.idade;
    if (a.altura != b.altura)
        return a.altura < b.altura;
    return a.nome < b.nome;
}
int main() {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int casos;
    int totalRenas, renaTreno;

    cin >> casos;

    for(int i = 1; i <= casos; i++){
        cin >> totalRenas >> renaTreno;
        vector<Rena> bando(totalRenas);

        for(int j = 0; j < totalRenas; j++)
            cin >> bando[j].nome >> bando[j].peso >> bando[j].idade >> bando[j].altura;
        
        sort(bando.begin(), bando.end(), compara);


        cout << "CENARIO {" << i << "}\n";
        for (int k = 0; k < renaTreno; k++) {
            cout << k + 1 << " - " << bando[k].nome << '\n';
        }
    }
    return 0;
}
