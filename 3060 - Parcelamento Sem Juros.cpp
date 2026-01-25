#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int V, P;
    
    cin >> V >> P;
    
    int resto = V%P;
    int parcela = V/P;
    
    for (int i=1; i<=P; i++){
        if (resto>=i)
            cout << parcela+1 << '\n'; 
        else
            cout << parcela << '\n';
    }

    return 0;
}
