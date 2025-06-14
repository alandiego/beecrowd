#include <bits/stdc++.h>

using namespace std;
using vs = vector<string>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    
    cin >> N;
    cin.ignore();
    
    while (N--){
        vs palavras;
        string linha;
        getline(cin, linha);
        stringstream s(linha); 
  
        string temp;
        while (s >> temp)
            palavras.push_back(temp);
            
        stable_sort(palavras.begin(), palavras.end(), [](const string &a, const string &b){ 
            return a.size() > b.size();
        });
    
        int i=0;
        for (; i<palavras.size()-1; ++i ){
            cout << palavras[i] << ' ';
        }
        cout << palavras[i] << '\n';

    }
    
    return 0;
}
