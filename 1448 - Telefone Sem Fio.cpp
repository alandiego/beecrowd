#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, tc = 1;
    
    cin >> t;
    cin.ignore();

    while (t--) {
        string frase, time1, time2;
        getline(cin, frase);
        getline(cin, time1);
        getline(cin, time2);
        
        int t1 = 0, t2 = 0;
        int desempate = 0; // 0 = indefinido, 1 = time 1, 2 = time 2
        
        for (int i = 0; i < frase.size(); i++) {
            bool ok1 = (time1[i] == frase[i]);
            bool ok2 = (time2[i] == frase[i]);

            if (ok1) t1++;
            if (ok2) t2++;

            if (desempate == 0 && ok1 != ok2) {
                desempate = ok1 ? 1 : 2;
            }
        }

        cout << "Instancia " << tc++ << '\n';

        if (t1 == t2 && desempate == 0)
            cout << "empate\n";
        else if (t1 > t2 || (t1 == t2 && desempate == 1))
            cout << "time 1\n";
        else
            cout << "time 2\n";

        cout << "\n";
    }

    return 0;
}
