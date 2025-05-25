#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int X, Y;
    
    while (cin >> X >> Y && X!=Y){
        
        if (X > Y)
            cout << "Decrescente\n";
        else
            cout << "Crescente\n";
    }
        
        
    return 0;
}
