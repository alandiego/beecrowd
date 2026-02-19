#include <bits/stdc++.h>
using namespace std;

int grid[9][9];

bool checkRow(int r) {
    int freq[9] = {0};

    for (int c = 0; c < 9; c++)
        freq[grid[r][c] - 1]++;

    for (int i = 0; i < 9; i++)
        if (freq[i] != 1) return false;

    return true;
}

bool checkColumn(int c) {
    int freq[9] = {0};

    for (int r = 0; r < 9; r++)
        freq[grid[r][c] - 1]++;

    for (int i = 0; i < 9; i++)
        if (freq[i] != 1) return false;

    return true;
}

bool checkRegion(int startRow, int startCol) {
    int freq[9] = {0};

    for (int r = startRow; r < startRow + 3; r++)
        for (int c = startCol; c < startCol + 3; c++)
            freq[grid[r][c] - 1]++;

    for (int i = 0; i < 9; i++)
        if (freq[i] != 1) return false;

    return true;
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n, tc = 1;
    cin >> n;

    while (n--) {

        for (int r = 0; r < 9; r++)
            for (int c = 0; c < 9; c++)
                cin >> grid[r][c];

        bool ok = true;

        for (int r = 0; r < 9 && ok; r++)
            ok = checkRow(r);

        for (int c = 0; c < 9 && ok; c++)
            ok = checkColumn(c);

        for (int r = 0; r < 9 && ok; r += 3)
            for (int c = 0; c < 9 && ok; c += 3)
                ok = checkRegion(r, c);

        cout << "Instancia " << tc++ << "\n";
        cout << (ok ? "SIM" : "NAO") << "\n\n";
    }

    return 0;
}
