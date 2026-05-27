#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    set<string> joias;
    
    string input;
    
    while (getline(cin, input)){
        joias.insert(input);
    }

    cout << joias.size() <<'\n';

    return 0;
}
