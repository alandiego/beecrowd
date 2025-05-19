#include <bits/stdc++.h>
using namespace std;

// Retorna a soma das diferenças absolutas de uma permutação alternada
int calcAlternado(vector<int> a, bool comecaMaior) {
    sort(a.begin(), a.end());
    deque<int> perm;
    int l = 0, r = a.size() - 1;
    bool lado = comecaMaior;

    while (l <= r) {
        if (l == r) {
            perm.push_back(a[l]);
        } else if (lado) {
            perm.push_front(a[r]);
            perm.push_back(a[l]);
        } else {
            perm.push_front(a[l]);
            perm.push_back(a[r]);
        }
        l++; r--;
        lado = !lado;
    }

    int soma = 0;
    for (int i = 1; i < perm.size(); ++i)
        soma += abs(perm[i] - perm[i - 1]);
    
    return soma;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int caso = 1; caso <= T; ++caso) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int res = max(calcAlternado(a, true), calcAlternado(a, false));
        cout << "Case " << caso << ": " << res << '\n';
    }

    return 0;
}
