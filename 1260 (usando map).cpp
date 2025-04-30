#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TC;
    map<string, double> arvores;
    string temp;
    
    cin >> TC;
    cin.get();
    getline(cin, temp);
    
    cout << fixed << setprecision(4);
    
    while (TC--){
        double total = 0.0;
        while (getline(cin, temp) && !temp.empty()){
            arvores[temp]++;
            total++;
        }
        
        for (auto arvore : arvores) {
            double porcentagem = (100*arvore.second)/total;
            cout << arvore.first << ' ' << porcentagem << endl;
        }
        
        arvores.clear();
        
        if (TC)
            cout << endl;
    }

    return 0;
}
