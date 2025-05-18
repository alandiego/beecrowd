#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int S;
    
    while (cin >> S && S) {
        vector<ll> Q(S); // Quadradônia
        vector<ll> N(S); // Noglônia
        int vitorias = 0;
        
        for (int i = 0; i < S; ++i)
            cin >> Q[i];
        for (int i = 0; i < S; ++i)
            cin >> N[i];
        
        sort(Q.begin(), Q.end(), greater<ll>());
        sort(N.begin(), N.end(), greater<ll>());
    
        //escolher o mais forte de N para vencer o mais forte em Q que ele consegue
        int i = 0, j = 0;
        while (i < S && j < S) {
            if (Q[i] < N[j]) {
                vitorias++;
                i++;
                j++;
            } else {
                i++;
            }
        }
        
        cout << vitorias << "\n";
    }

    return 0;
}
