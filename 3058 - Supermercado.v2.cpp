#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, gi;
    double pi;
    cin >> N;
    
    vector<double> carnes(N);

    for (int i = 0; i < N; i++) {
        cin >> pi >> gi;
        carnes[i] = (double) pi/gi;
    }

    sort(carnes.begin(), carnes.end());
    
    cout << fixed << setprecision(2) << carnes[0]*1000 << '\n'; 

    return 0;
}
