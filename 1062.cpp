#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, x;
    
    stack<int> A, B, estacao;
    
    while (cin>> N){
        if (!N) break; // sai caso 0
        
        while (cin >> x){
            if(!x){ // chegou ao final do caso teste
                cout << endl;
                break;
            }
            
            while (!A.empty()) A.pop(); // zera a pílha
            while (!B.empty()) B.pop(); // zera a pílha
            while (!estacao.empty()) estacao.pop(); // zera a pílha
            
            A.push(x); // Ordem de leitura
            B.push(1); // Ordem desejada de saída
            
            for (int i = 2; i<=N; i++){
                cin >> x;
                A.push(x); // Ordem de leitura
                B.push(i); // Ordem desejada de saída
            }
            
            //quando tudo esvaziar significa que a checagem foi completada
            while(!A.empty() || !estacao.empty() || !B.empty()){
                //combinou ordem de chegada com saida
                if(!A.empty() && !B.empty() && A.top() == B.top()){
                    A.pop();
                    B.pop();
                //combinou vagão na estação com vagão para sair em B
                }else if(!estacao.empty() && !B.empty() && estacao.top() == B.top()){
                    estacao.pop();
                    B.pop();
                //Não houve combinação e o vagão vai para estação
                }else if(!A.empty()){
                    estacao.push(A.top());
                    A.pop();
                //Não sera possivel reorganizar
                }else{
                    break;
                }
            }
            
            if(A.empty() && estacao.empty() && B.empty()){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            
        }
    }

    return 0;
}


