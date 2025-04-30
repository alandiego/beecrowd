#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TC;
    string cifra;
    int deslocamento;
    
    cin >> TC;
    
    while (TC--){
        cin >> cifra >> deslocamento;
        for (char c : cifra){
            char x;
            if (c-deslocamento >= 'A')
                x = c-deslocamento;
            else
                x = 'Z' - ('A' - (c-deslocamento)-1);
            cout << x;
        }
        cout << endl;
    }

    return 0;
}
