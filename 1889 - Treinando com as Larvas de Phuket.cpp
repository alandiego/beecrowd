#include <bits/stdc++.h>

using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;

    cin >> T;

    cout << fixed << setprecision(2);

    while (T--) {
        cin >> N;

        vector<double> larvas(N);
        for (int i = 0; i < N; i++) {
            cin >> larvas[i];
        }

        sort(larvas.begin(), larvas.end());

        double menor = 1e18;
        bool found = false;

        for (int k = 2; k < N; k++) {
            int i = 0;

            for (int j = k - 1; j > i; j--) {

                while (i < j && larvas[i] + larvas[j] <= larvas[k]) i++;

                if (i >= j) break;

                double a = larvas[i];
                double b = larvas[j];
                double c = larvas[k];

                double s = (a + b + c) / 2.0;
                double area2 = s * (s - a) * (s - b) * (s - c);

                if (area2 > 0) {
                    double area = sqrt(area2);
                    menor = min(menor, area);
                    found = true;
                }
            }
        }

        if (!found) cout << "-1\n";
        else cout << menor << "\n";
    }

    return 0;
}
