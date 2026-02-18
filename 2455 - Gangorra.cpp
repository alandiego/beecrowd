#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int P1, P2, C1, C2;
    
    cin >> P1 >> C1 >> P2 >> C2;
    
    int balance = P1*C1 - P2*C2;
    
    if (balance == 0)
        cout << "0\n";
    else if (balance<0)
        cout << "1\n";
    else
        cout << "-1\n";
    
    return 0;
}
