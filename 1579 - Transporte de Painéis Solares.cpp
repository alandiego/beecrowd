#include <bits/stdc++.h>
using namespace std;

// verifica se é possível transportar os painéis
// com no máximo 'caminhoes', sem ultrapassar 'peso'
bool carrega(const vector<int> &paineis, int peso, int caminhoes) {
    int pesoAtual = 0;

    for (int p : paineis) {
        if (pesoAtual + p <= peso) {
            pesoAtual += p;
        } else {
            pesoAtual = p;
            caminhoes--;
            if (caminhoes == 0)
                return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    while (N--) {
        int nPaineis, caminhoes, frete;
        cin >> nPaineis >> caminhoes >> frete;

        vector<int> paineis(nPaineis);
        for (int i = 0; i < nPaineis; i++) {
            cin >> paineis[i];
        }

        //menor peso possível
        int lo = *max_element(paineis.begin(), paineis.end());
        //maior peso possível
        int hi = accumulate(paineis.begin(), paineis.end(), 0LL);

        // binary search
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (carrega(paineis, mid, caminhoes))
                hi = mid;
            else
                lo = mid + 1;
        }

        int pesoMax = lo;
        int custo = pesoMax * frete * caminhoes;

        cout << pesoMax << " $" << custo << "\n";
    }

    return 0;
}
