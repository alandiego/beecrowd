#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int M, N;
    
    while (cin >> M >> N && M>0 && N>0){
        int menor, maior;
        int soma=0;
        
        menor = min(N, M);
        maior = max(N, M);
        
        
        for (; menor <= maior; ++menor){
            cout << menor <<" ";
            soma+=menor;
        }
        
        cout << "Sum="<< soma <<"\n";
    }
        
        
    return 0;
}
