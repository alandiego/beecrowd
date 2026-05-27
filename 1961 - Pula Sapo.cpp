#include <bits/stdc++.h>
using namespace std;

int main(){
    int P, N;
    cin >> P >> N;

    int atual, proximo;
    bool ok = true;

    cin >> atual; // lê o primeiro cano

    for (int i = 1; i < N; i++){
        cin >> proximo;

        if (abs(proximo - atual) > P)
            ok = false;

        atual = proximo;
    }

    cout << (ok ? "YOU WIN" : "GAME OVER") << endl;

    return 0;
}
