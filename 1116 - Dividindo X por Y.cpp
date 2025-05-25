#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    
    cin >> N;
    
    cout << fixed << setprecision(1);
    
    while (N--){
        double X, Y;
        
        cin >> X >> Y;
        
        if (Y==0.0)
            cout << "divisao impossivel\n";
        else
            cout << (double) X/Y << "\n";
    }
        
        
    return 0;
}
