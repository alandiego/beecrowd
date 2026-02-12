#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, D;
    while (cin >> N >> D && N) {
        string s;
        cin >> s;

        string ans;
        for (char c : s) {
            while (!ans.empty() && D > 0 && ans.back() < c) {
                ans.pop_back();
                D--;
            }
            ans.push_back(c);
        }

        while (D){
            ans.pop_back();
            D--;
        }

        cout << ans << "\n";
    }
    return 0;
}
