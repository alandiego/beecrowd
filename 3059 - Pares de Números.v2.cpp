#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, I, F, resp=0;
    
    cin >> N >> I >> F;
    
    vector<int> v(N);
    
    for (int i=0; i<N; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for (int i=0; i<N-1; i++){
        int minimo = I - v[i];
        int maximo = F - v[i];

        // busca apenas à direita de i
        auto it1 = lower_bound(v.begin() + i + 1, v.end(), minimo);
        auto it2 = upper_bound(v.begin() + i + 1, v.end(), maximo);

        resp += (it2 - it1);
    }
    
    
    cout << resp << '\n'; 

    return 0;
}
