#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double I, J;
    
    for (I=0; I<2.1; I+=0.2){
        for (J=I+1; J<=I+3; ++J)
            cout << "I=" << I << " J=" << J <<"\n";
    }
        
        
    return 0;
}
