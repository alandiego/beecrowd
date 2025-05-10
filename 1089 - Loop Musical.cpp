#include<bits/stdc++.h>

using namespace std;

using vi = vector<int>;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, anterior, proximo, picos;
    
    while (cin >> N && N){
        vi amostra(N);
        
        for (int i=0; i< N; ++i){
            cin >> amostra[i];
        }
        
        picos = 0;
        for(int i = 0; i < N; ++i){
            anterior = amostra[((i - 1) + N) % N];
            proximo = amostra[(i + 1) % N];

            if((amostra[i] < anterior && amostra[i] < proximo) || (amostra[i] > anterior && amostra[i] > proximo))  ++picos;
        }
        
        cout << picos <<"\n";
        
    }
    
    return 0;
}
