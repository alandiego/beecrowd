#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    cin.ignore(); // ignorar \n depois do número de casos

    while (N--) {
        string line;
        getline(cin, line);
        string ans;

        for (int i = 0; i < (int)line.size(); i++) {
            if (line[i] == '0' || line[i] == ' ') {
                int j = i;
                while (j < (int)line.size() && line[j] == line[i]) j++;
                int count = j - i;

                if (count > 2) {
                    char marker = (line[i] == '0' ? '#' : '$');
                    int remaining = count;
                    while (remaining > 0) {
                        int block = min(255, remaining);
                        ans.push_back(marker);
                        ans.push_back((char)block);
                        remaining -= block;
                    }
                } else {
                    // não compensa compactar
                    for (int k = 0; k < count; k++) {
                        ans.push_back(line[i]);
                    }
                }
                i = j - 1; // corrigido
            } else {
                ans.push_back(line[i]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
