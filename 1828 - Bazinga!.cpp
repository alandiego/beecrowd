#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    map<string, set<string>> ganha;
    ganha["tesoura"] = {"papel", "lagarto"};
    ganha["papel"]   = {"pedra", "Spock"};
    ganha["pedra"]   = {"lagarto", "tesoura"};
    ganha["lagarto"] = {"Spock", "papel"};
    ganha["Spock"]   = {"tesoura", "pedra"};

    for (int i = 1; i <= T; i++) {
        string sheldon, raj;
        cin >> sheldon >> raj;

        cout << "Caso #" << i << ": ";

        if (sheldon == raj) {
            cout << "De novo!\n";
        } else if (ganha[sheldon].count(raj)) {
            cout << "Bazinga!\n";
        } else {
            cout << "Raj trapaceou!\n";
        }
    }

    return 0;
}
