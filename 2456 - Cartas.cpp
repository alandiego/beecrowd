#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> cards(5);

    for (int i = 0; i < 5; i++) {
        cin >> cards[i];
    }

    bool ascending = true;
    bool descending = true;

    for (int i = 0; i < 4; i++) {
        if (cards[i] >= cards[i + 1])
            ascending = false;

        if (cards[i] <= cards[i + 1])
            descending = false;
    }

    if (ascending)
        cout << "C\n";
    else if (descending)
        cout << "D\n";
    else
        cout << "N\n";

    return 0;
}
