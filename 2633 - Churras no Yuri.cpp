#include <bits/stdc++.h>
using namespace std;

struct Carne {
    string nome;
    int validade;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    while (cin >> N) {
        vector<Carne> v(N);

        for (int i = 0; i < N; i++) {
            cin >> v[i].nome >> v[i].validade;
        }

        sort(v.begin(), v.end(), [](const Carne &a, const Carne &b) {
            return a.validade < b.validade;
        });

        for (int i = 0; i < N; i++) {
            if (i) cout << " ";
            cout << v[i].nome;
        }
        cout << "\n";
    }

    return 0;
}
