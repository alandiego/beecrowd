#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    
    cin >> N;
    
    for (int i=1; i<=10; ++i)
        cout << i << " x " << N << " = " << i*N <<'\n';
        
    return 0;
}
