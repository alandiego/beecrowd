#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TC;
    multiset<string> arvores;
    string temp;
    
    cin >> TC;
    cin.get();
    getline(cin, temp);
    
    cout << fixed << setprecision(4);
    
    while (TC--){
        
        while (getline(cin, temp) && !temp.empty()){
            arvores.insert(temp);
        }
        
        double total = arvores.size();
        while (!arvores.empty()) {
            auto it = arvores.begin();
            double porcentagem = (100*arvores.count(*it))/total;
            cout << *it << ' ' << porcentagem << endl;
            arvores.erase(*it);
        }
        
        if (TC)
            cout << endl;
    }

    return 0;
}
