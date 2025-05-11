#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int H1, M1, H2, M2, minutos;
    
    while (cin >> H1 >> M1 >> H2 >> M2){
        if (!H1 && !M1 && !H2 && !M2 ) break;
        
        int inicio = H1 * 60 + M1;
        int fim = H2 * 60 + M2;
        minutos = 0;

        if (fim >= inicio) {
            minutos = fim - inicio;
        } else {
            minutos = (24 * 60 - inicio) + fim;
        }

        cout << minutos << "\n";
    }
    
    
    return 0;
}
