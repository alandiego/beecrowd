#include <bits/stdc++.h>

using namespace std;

int main(){
    string assassino, morto;
    map<string, int> assassinos;
    set<string> mortos;
    
    while(cin >> assassino >> morto){
        assassinos[assassino]++;
        mortos.insert(morto);
    }
    
    cout << "HALL OF MURDERERS\n";
    for (auto &p : assassinos){
        if (!mortos.contains(p.first))
            cout << p.first << ' ' << p.second << '\n';
    }
    
    return 0;
}
