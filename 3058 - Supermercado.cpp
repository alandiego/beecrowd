#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    
    vector<pair<double, int>> carnes(N);

    for (int i = 0; i < N; i++) {
        cin >> carnes[i].first >> carnes[i].second;
    }

    sort(carnes.begin(), carnes.end(),
        [](const pair<double, int> &a, const pair<double, int> &b) {
            return (a.first / a.second) < (b.first / b.second);
        }
    );
    
    cout << fixed << setprecision(2) << (carnes[0].first / carnes[0].second)*1000 << '\n'; 

    return 0;
}
