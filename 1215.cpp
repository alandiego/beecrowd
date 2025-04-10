#include <bits/stdc++.h>

using namespace std;

int main(){
    set<string> dicionario;
    string linha;
    string palavra;
    int prefixo;
    int sufixo;
    
    while (cin >> linha){
        
        //substitui caracteres que nao sao letras
        for (int i=0; i < linha.size(); i++){
            if (!isalpha(linha[i]))
                linha[i] = ' ';
            else
                linha[i] = tolower(linha[i]); //coloca em lowercase
        }
        
        stringstream ss(linha);
        
        while (ss >> palavra){
            dicionario.insert(palavra);
        }
        
    }
    
    for (auto p : dicionario){
        cout << p << endl;
    }
    
    return 0;
}
