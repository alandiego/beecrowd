#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n !=0) {
        int resp =0;
        for (int i=1; i<=n; i++){
            resp += i*i;
        }
        cout << resp << '\n';
    }
    return 0;
}
