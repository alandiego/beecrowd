#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int X1, X2, Y1, Y2;
    
    while (cin >> X1 >> Y1 >> X2 >> Y2){
        
        if (!X1 && !X2 && !Y1 && !Y2 ) break;
        
        if (X1 == X2 && Y1 == Y2)
            cout << "0\n";
        else if ( X1 == X2 || Y1 == Y2 || abs(X1 - X2) == abs(Y1 - Y2) )
            cout << "1\n";
        else
            cout << "2\n";
        
    }
    
    return 0;
}
