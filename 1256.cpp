#include <bits/stdc++.h>

using namespace std;

int main(){
    int TC;
    int M, C, temp;
    vector<vector<int>> tabela_hash;
    
    cin >> TC;
    
    while (TC--){
        cin >> M >> C;
        tabela_hash.assign(M, vector<int>(0));
        
        for (int i=0; i< C; i++){
            cin >> temp;
            tabela_hash[temp % M].push_back(temp);
        }
        
        for (int i=0; i<M; i++){
            cout <<  i << " -> ";
            
            for (auto elemento : tabela_hash[i])
                cout << elemento << " -> ";;
            
            cout << "\\\n"; 
        }
        
        if (TC)
            cout << "\n"; 
        
    }
    
    
    return 0;
}
