#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll A, B, C;
    
    while(cin >> A >> B && A && B){
        C = (2 * A) - B;
        cout << C << "\n";
    }
 
    return 0;   
}
