#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    
    cin >> N;
    
    while (N--){
        int valor;
        cin >> valor;
        if (valor==0)
            cout << "NULL\n";
        else if (valor%2==0){
            if (valor < 0)
                cout << "EVEN NEGATIVE\n";
            else
                cout << "EVEN POSITIVE\n";
        } else {
            if (valor < 0)
                cout << "ODD NEGATIVE\n";
            else
                cout << "ODD POSITIVE\n";
        }
            
    }
        
    return 0;
}
