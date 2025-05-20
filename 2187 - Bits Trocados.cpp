#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int V, TC=0;
    
    while (cin >> V && V){
        int I, J, K, L;
        
        I = V/50;
        V %= 50;
        
        J = V/10;
        V %= 10;
        
        K = V/5;
        V %= 5;
        
        L=V;
        
        cout << "Teste " << ++TC << '\n';
        cout << I <<  ' ' << J << ' ' << K << ' ' << L << "\n\n";
        
    }
}
