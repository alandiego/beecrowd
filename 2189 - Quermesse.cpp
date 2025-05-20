#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, TC=0;
    
    while (cin >> N && N){
        vector<int> participantes(N);
        int ganhador;
        
        for (int i=0; i<N; ++i)
            cin >> participantes[i];
        
        for (int i=0; i<N; ++i){
            if (participantes[i]==i+1)
                ganhador = i+1;
        }
        
        cout << "Teste " << ++TC << '\n';
        cout << ganhador << "\n\n";
    }
}
