#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int tipo;
    int x;
    
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> fila_prioridade;
    vector<int> existe;//usar pra verificar se o elemento existe ao tentar remover

    
    while (cin >> N && N !=0){
        
                
        existe.assign(101, 0);
        
        int p =1;
        int f =1;
        int fp = 1;
        bool impossivel=false;
        
        for (int i=0; i<N; i++){
            cin >> tipo >> x;
            if (tipo == 1){
                existe[x]++;
                pilha.push(x);
                fila.push(x);
                fila_prioridade.push(x);
            } else {
                if (existe[x]==0){
                    impossivel = true;
                    existe[x]--;
                }
                if (!pilha.empty() && pilha.top() != x)
                    p=0; //nao é uma pilha
                if (!fila.empty() && fila.front() !=x)
                    f=0;
                if (!fila_prioridade.empty() && fila_prioridade.top()!=x)
                    fp=0;
                if (!pilha.empty())  
                    pilha.pop();
                if (!fila.empty())
                    fila.pop();
                if (!fila_prioridade.empty())
                    fila_prioridade.pop();
            }
        }
        
        while (!pilha.empty())  
            pilha.pop();
        while(!fila.empty())
            fila.pop();
        while (!fila_prioridade.empty())
            fila_prioridade.pop();
        
        if (impossivel){
            cout << "impossible" << endl;
        } else if (p && !f && !fp){
            cout << "stack" << endl;
        } else if (!p && f && !fp){
            cout << "queue" << endl;
        } else if (!p && !f && fp){
            cout << "priority queue" << endl;
        } else {
            cout << "not sure" << endl;
        }
    }
    
    
    return 0;
}


