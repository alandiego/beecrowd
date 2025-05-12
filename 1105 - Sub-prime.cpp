#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int B, N, D, C, V;
    
    while(cin >> B >> N && B && N){
        vector<int> banco(B);
        
        for (int i=0; i<B; ++i)
            cin >> banco[i];
            
        for (int i=0; i<N; ++i){
            cin >> D >> C >> V;
            banco[D - 1] -= V;
            banco[C - 1] += V;
        }

        //verifica se todos os bancos estão com saldo positivo
        bool ok = all_of(banco.begin(), banco.end(), [](int saldo) { return saldo >= 0; });

        cout << (ok ? "S\n" : "N\n");
    }
    
    return 0;
}
