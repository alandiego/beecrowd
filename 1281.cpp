#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M, P;
    unordered_map<string, double> feira;
    string produto;
    double preco;
    int qtd;
    double custo_total;
    
    cin >> N;
    
    while (N--){
        cin >> M;
        
        for (int i=0; i< M; i++){
            cin >> produto >> preco;
            feira.insert({produto,preco});
        }
        
        custo_total = 0;
        
        cin >> P;
        for (int i=0; i< P; i++){
            cin >> produto >> qtd;
            custo_total += feira[produto]*qtd;
        }
        
        printf("R$ %.2lf\n", custo_total);
        
        feira.clear();
    }
    
    
    return 0;
}
