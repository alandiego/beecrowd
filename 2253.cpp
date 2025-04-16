#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool maiuscula, minuscula, numero, proibido;
    string senha;
    
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    while (getline(cin, senha)){
        maiuscula = false;
        minuscula = false;
        numero = false;
        proibido = true;
        
        if (senha.size()<6 || senha.size() > 32)
            cout << "Senha invalida.\n";
        else {
            for (int i=0; i<senha.size(); i++){
                if (isalnum(senha[i])){
                    if (isdigit(senha[i]))
                        numero = true;
                    else {
                        if (isupper(senha[i]))
                            maiuscula = true;
                        else
                            minuscula = true;
                    }
                } else {
                    proibido = false;
                    break;
                }  
            }
            if (maiuscula && minuscula && numero && proibido)
                cout << "Senha valida.\n";
            else
                cout << "Senha invalida.\n";
        }
        
    }

    return 0;
}
