#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-6;
vector<double> tubes;

double calculaTotal(double target) {
    double total = 0.0;
    for (auto &t : tubes) {
        total += fabs(t - target);
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    double temp;

    while (cin >> N) {

        tubes.clear();
        for (int i = 0; i < N; i++) {
            cin >> temp;
            tubes.push_back(temp);
        }

        double lo = *min_element(tubes.begin(), tubes.end());
        double hi = *max_element(tubes.begin(), tubes.end());

        while (fabs(hi - lo) > EPS) {
            double m1 = lo + (hi - lo) / 3.0;
            double m2 = hi - (hi - lo) / 3.0;

            if (calculaTotal(m1) > calculaTotal(m2))
                lo = m1;
            else
                hi = m2;
        }

        cout << fixed << setprecision(2) << calculaTotal((lo + hi) / 2.0) << "\n";
    }

    return 0;
}
