#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int in = 0, out = 0;

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;

        if (X >= 10 && X <= 20) {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in\n";
    cout << out << " out\n";

    return 0;
}
