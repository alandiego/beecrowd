#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int senha;
    
    while (cin >> senha){
        
        if (senha==2002) {
            cout << "Acesso Permitido\n";
            break;
        } else
            cout << "Senha Invalida\n";
    }
        
        
    return 0;
}
