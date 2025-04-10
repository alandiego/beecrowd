#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    unordered_set<string> conjunto;
    string palavra;
    bool bom;
    
    while (cin >> N && N){
        bom = true;
        for (int i=0; i<N; i++){
            cin >> palavra;
            //a palavra inteira já existe
            if (conjunto.count(palavra))
                bom=false;
            conjunto.insert(palavra);
        }
        
        for (auto p : conjunto){
            for (int k=1; k < p.size() && bom; k++){
                //testa todos os prefixos da palavra
                string sub = p.substr(0,k);
                if (conjunto.count(sub)){
                    bom = false;
                    break;
                }
            }
            if (!bom)
                break;
        }
        
        if (bom)
            cout << "Conjunto Bom" << endl;
        else
            cout << "Conjunto Ruim" << endl;
        conjunto.clear();
    }
    
    
    return 0;
}
