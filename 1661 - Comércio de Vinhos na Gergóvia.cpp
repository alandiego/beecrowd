#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    
    while (cin >> n && n) {
        long long trabalho = 0, saldo = 0, x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            saldo += x;
            trabalho += abs(saldo);
        }

        cout << trabalho << "\n";
    }

    return 0;
}
