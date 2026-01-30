#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    
    cin >> N;
    
    while (N--){
        cin >> M;
        vector<int> alunos(M);
        vector<int> alunosOrdenados(M);
        
        
        for (int i=0; i<M; i++){
            cin >> alunos[i];
            alunosOrdenados[i] = alunos[i];
        }
        
        sort(alunosOrdenados.begin(), alunosOrdenados.end(), [](const int &a, const int &b){
            return a > b; 
        });
        
        int resp=0;
        
        for (int i=0; i<M; i++){
            if (alunosOrdenados[i]==alunos[i])
                resp++;
        }
        
        cout << resp << "\n";
        
    }
    
    return 0;
}
