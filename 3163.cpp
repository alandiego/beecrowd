#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<string> norte;
    queue<string> sul;
    queue<string> leste;
    queue<string> oeste;
    
    queue<string> ordemFinal;

    
    char identificador;
    int P;
    string aviao;
    
    while (cin >> identificador){
        if (identificador == '0'){
            break;
        } else if (identificador=='-'){
            cin >> P;
        } else {
            cin >> aviao;
            
            switch (P){
                case 1:
                    oeste.push(aviao);
                    break;
                case 2:
                    sul.push(aviao);
                    break;
                case 3:
                    norte.push(aviao);
                    break;
                default:
                    leste.push(aviao);
                    break;
            }
            
        }
    }
    
    int tamanho = oeste.size() + norte.size() + sul.size() + leste.size();
    
    for (;tamanho>0; tamanho--){
        if (!oeste.empty()){
            ordemFinal.push(oeste.front());
            oeste.pop();
        }
        
        if (!norte.empty()){
            ordemFinal.push(norte.front());
            norte.pop();
        }
        
        if (!sul.empty()){
            ordemFinal.push(sul.front());
            sul.pop();
        }
        
        if (!leste.empty()){
            ordemFinal.push(leste.front());
            leste.pop();
        }
    }
        
    
    while (ordemFinal.size()>1){
        cout << 'A' << ordemFinal.front() << ' ';
        ordemFinal.pop();
    }
    cout << 'A' << ordemFinal.front() << endl;
    ordemFinal.pop();
    
    return 0;
}


