#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> tabuleiro;
    vector<int> bombas;
    int N;
    
    cin >> N;
    
    tabuleiro.assign(N+2, 0);
    bombas.assign(N+2, 0);
    
    for (int i=1; i <= N; i++){
        cin >> tabuleiro[i];
    }
    
    for (int i=1; i <= N; i++){
        bombas[i] = tabuleiro[i]+ tabuleiro[i-1]+tabuleiro[i+1];
    }
    
    for (int i=1; i <= N; i++){
       cout << bombas[i] << endl;
    }
    
    return 0;
}
