#include <bits/stdc++.h>

using namespace std;

int main () {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int T, X, Y, Z;
    vector<tuple<int, int, int>> expressoes;
    char igual, op;
    vector<string> nomes;
    string nome;
    int indx;
    
    while (cin >> T){
        for (int i=0; i<T; i++){
            cin >> X >> Y >> igual >> Z;
            expressoes.push_back({X, Y, Z});
        }
        for (int i=0; i<T; i++){
            cin >> nome >> indx >> op;
            auto [xi, yi, zi] = expressoes[indx-1];
            if (op == '+' &&  xi + yi != zi)
                nomes.push_back(nome);
            else if (op == '*' &&  xi * yi != zi)
                nomes.push_back(nome);
            else if (op == '-' &&  xi - yi != zi)
                nomes.push_back(nome);
            else if ( op == 'I'){
                if ( xi + yi == zi || xi * yi == zi || xi - yi == zi)
                    nomes.push_back(nome);
            }
        }
        
        sort(nomes.begin(), nomes.end());
        
        if (nomes.empty())
            	cout << "You Shall All Pass!\n";
        else if (nomes.size() == T)
            	cout << "None Shall Pass!\n";
        else {
            cout << nomes[0];
            for(int i=1; i<nomes.size(); i++)
                cout << ' ' <<nomes[i];
            cout << "\n";
        }
        nomes.clear();
        expressoes.clear();
    }


	return 0;
}
