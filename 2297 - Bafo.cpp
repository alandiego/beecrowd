#include <bits/stdc++.h>

using namespace std;

int main (){
    int A, B, R, TC=1, aldo, beto;
    
    
    while (cin >> R && R){
        aldo = beto = 0;
        while (R--){
            cin >> A >> B;
            aldo +=A; beto +=B;
        }
        cout << "Teste " << TC++ << '\n';
        if (aldo > beto)
            cout << "Aldo\n\n";
        else
            cout << "Beto\n\n";
    }
    
    return 0;
}
