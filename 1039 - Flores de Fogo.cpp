#include <bits/stdc++.h>

using namespace std;

double distancia(double x1, double y1, double x2, double y2){
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx*dx + dy*dy);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double R1, X1, Y1, R2, X2, Y2;
    
    while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2 ){

        bool ok = false;

        //raio do caçador tem que ser maior que da flor
        //distancia dos dois centros mais raio do menor for menor que do maior ta ok
        if ( R1 >= R2 && distancia(X1, Y1, X2, Y2) <= R1-R2 )
                ok = true;

        cout << (ok ? "RICO" : "MORTO") << '\n';

    }
    

    return 0;
}
