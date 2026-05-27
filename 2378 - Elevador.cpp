#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, C, S, E, currentSum = 0;
    bool ans = false;
    
    cin >> N >> C;
    
    while (N--){
        cin >> S >> E;
        currentSum += (-S) + E;
        if (currentSum > C) ans = true;
    }

    cout << (ans ? 'S' : 'N') << '\n';

    return 0;
}
