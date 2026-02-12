#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s) {   // lê até EOF
        long long ans = 0;

        for (char c : s) {
            int val = c - 'A';   // A=0, B=1, ..., Z=25
            ans = (ans * 26 + val) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}
