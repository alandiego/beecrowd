#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<pair<int, int>> iogurtes(N); // {gostosura, volume}
        
        for (int i = 0; i < N; ++i)
            cin >> iogurtes[i].first >> iogurtes[i].second;
        
        // Ordenar por gostosura por volume decrescente
        sort(iogurtes.begin(), iogurtes.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return (double) a.first / a.second > (double) b.first / b.second;
        });
        
        double gostosura = 0.0;
        int capacidade = X; // capacidade sobrando
        
        for (int i = 0; i < N && capacidade > 0; ++i) {
            int g = iogurtes[i].first;
            int v = iogurtes[i].second;
            
            if (capacidade >= v) {
                gostosura += g;
                capacidade -= v;
            } else {
                gostosura += capacidade * ((double)g / v);
                capacidade = 0;
            }
        }
        
        cout << fixed << setprecision(2) << gostosura << "\n";
    }

    return 0;
}
