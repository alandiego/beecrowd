#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int I, J;
    
    for (J=60, I=1; J>=0; J-=5, I+=3)
        cout << "I=" << I << " J=" << J <<"\n";
        
    return 0;
}
