#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int valor;
    int maior=0;
    int posicao;
    
    for (int i=0; i<100; ++i){
        cin >> valor;
        if (valor>maior){
            maior=valor;
            posicao=i+1;;
        }
    }
    cout << maior << '\n' << posicao << '\n';
    return 0;
}
