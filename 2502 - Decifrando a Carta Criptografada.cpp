#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int C, N;

    while (cin >> C >> N) {

        unordered_map<char, char> sub;

        string a, b;

        cin.ignore();

        getline(cin, a);
        getline(cin, b);

        for (int i = 0; i < C; i++) {

            sub[toupper(a[i])] = toupper(b[i]);
            sub[toupper(b[i])] = toupper(a[i]);

            sub[tolower(a[i])] = tolower(b[i]);
            sub[tolower(b[i])] = tolower(a[i]);
        }

        while (N--) {

            string str;
            getline(cin, str);

            for (char &c : str) {

                if (sub.count(c))
                    c = sub[c];
            }

            cout << str << '\n';
        }

        cout << '\n';
    }

    return 0;
}
