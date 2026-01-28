#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int NC;
    cin >> NC;

    while (NC--) {
        int N;
        cin >> N;

        // alturas vão de 20 até 230
        static int cont[231];
        memset(cont, 0, sizeof(cont));

        int h;
        for (int i = 0; i < N; i++) {
            cin >> h;
            cont[h]++;
        }

        string ans;
        for (int altura = 20; altura <= 230; altura++) {
            while (cont[altura]--) {
                ans += to_string(altura) + " ";
            }
        }
        ans[ans.size()-1]='\n';
        cout << ans;
    }

    return 0;
}
