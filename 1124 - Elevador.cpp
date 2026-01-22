#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int L, C, R1, R2;
    
    while (cin >> L >> C >> R1 >> R2 &&( L && C && R1 && R2)){
        bool ok = true;
        
       // Cada cilindro precisa caber individualmente
        if (2 * R1 > L || 2 * R1 > C || 2 * R2 > L || 2 * R2 > C)
            ok = false;

        /*coloca um centro canto inf esquerdo e um no canto sup dir
        Cilindro 1 (raio R1) fica no ponto (R1, R1)
        Cilindro 2 (raio R2) fica no ponto (L-R2, C-R2)
        Distância máxima entre os centros */
        double dx = L - R1 - R2;
        double dy = C - R1 - R2;
        double dist = sqrt(dx * dx + dy * dy);

        if (dist < R1 + R2)
            ok = false;

        cout << (ok ? 'S' : 'N') << '\n';
    }
        
    
    return 0;
}
