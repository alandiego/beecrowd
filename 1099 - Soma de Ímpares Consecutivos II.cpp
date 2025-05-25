#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    
    cin >> N;
    
    while (N--){
        int X, Y, menor, maior;
        int soma=0;
        
        cin >> X >> Y;
        
        menor = min(X, Y);
        maior = max(X, Y);
        
        (menor%2==0) ? X=menor+1: X=menor+2;
        
        for (; X<maior;X+=2){
            soma+=X;
        }
        
        cout << soma <<"\n";
    }
        
        
    return 0;
}
