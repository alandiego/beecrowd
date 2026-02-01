#include <bits/stdc++.h>

using namespace std;

int main (){
    int N, M;
    string acao;
    cin >> N >> M;
    
    while (M--){
        cin >> acao;
        if (acao == "fechou")
            N++;
        else
            N--;
    }
    
    cout << N << '\n';
    
    return 0;
}
