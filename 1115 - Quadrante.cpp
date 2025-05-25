#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int X, Y;
    
    while (cin >> X >> Y && X && Y){
        
        if (X>0 && Y>0)
            cout << "primeiro\n";
        else if (X>0 && Y < 0)
            cout << "quarto\n";
        else if (X<0 && Y < 0)
            cout << "terceiro\n";
        else
            cout << "segundo\n";
    }
        
        
    return 0;
}
