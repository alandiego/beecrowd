#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string line;

    while (getline(cin, line)) {
        for (char c : line) {
            if (c == ' ') {
                cout << ' ';
                continue;
            }

            for (int i = 0; i < keyboard.size(); i++) {
                if (keyboard[i] == c) {
                    cout << keyboard[i-1];
                    break;
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
