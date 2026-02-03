#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        // Conta quantas exclamações existem
        int K = 0;
        while (s.back() == '!') {
            K++;
            s.pop_back();
        }

        // O que sobrou é o número N
        long long N = stoll(s);

        long long resp = 1;
        for (long long x = N; x >= 1; x -= K) {
            resp *= x;
        }

        cout << resp << '\n';
    }

    return 0;
}
