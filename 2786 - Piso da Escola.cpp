#include <bits/stdc++.h>

using namespace std;

int main(){
    int L, C;
    
    cin >> L >> C;
    
    int T1 = (L * C) + (L-1) * (C-1);

    int T2 = ((L-1)*2) + ((C-1)*2);

    cout << T1 << "\n" << T2 << "\n";

    return 0;
}
