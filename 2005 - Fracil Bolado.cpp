#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; //qtd de ratos
    int M; //qtd de alimentos
    
    vector<int> rato;
    vector<int> sustento;
    
    int temp;
    
    int qtd_ratos_saciados;
    int achou;
    
    
    while (cin >> N >> M){
        rato.assign( 1001, 0);
        sustento.assign(M, 0);    
        qtd_ratos_saciados =0;
        
        for (int i=0; i<N; i++){
            cin >> temp;
            rato[temp]++;
        }
        
        for (int i=0; i<M; i++){
            cin >> sustento[i];
        }
        
        //loop p decidir para que rato vai o alimento
        for (int i=0; i<M; i++){
            int achou = false; // verifica se tem um rato que mata a fome com essa comida
            for (int j= sustento[i]; j>0; j--){
                if (rato[j] > 0){
                    rato[j]--;
                    qtd_ratos_saciados++;
                    achou=true;
                    break;
                }
            }
            if (!achou){
                for (int j=1000; j>0; j--){
                    if (rato[j] > 0){
                        rato[j]--;
                        rato[j-sustento[i]]++;
                        break;
                    }
                }
            }
            
        }
        
        cout << qtd_ratos_saciados << "\n";
    }

    return 0;
}
