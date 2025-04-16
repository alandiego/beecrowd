#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    bool italico, negrito;
    string linha;
    
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    while (getline(cin, linha)){
        italico = true;
        negrito = true;
        
        for (int i=0; i<linha.size(); i++){
            if (linha[i] == '_'){
                if (italico) cout << "<i>";
                else cout << "</i>";
                italico = !italico;
            } else if (linha[i] == '*'){
                if (negrito) cout << "<b>";
                else cout << "</b>";
                negrito = !negrito;
            } else
                cout << linha[i];
        }
        cout << "\n";
    }

    return 0;
}
