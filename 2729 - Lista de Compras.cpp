#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    
    cin >> N;
    cin.ignore();

    while (N--){
        string linha;
        string palavra;
        set<string> lista;
        getline(cin, linha);
        
        stringstream ss(linha);
        
        while(ss >> palavra)
            lista.insert(palavra);
        
        bool primeiro = true;
        for (const auto& item : lista) {
            if (!primeiro) cout << ' ';
            cout << item;
            primeiro = false;
        }
        cout << '\n';
        
        
    }

    return 0;
}
