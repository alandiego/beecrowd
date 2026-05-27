#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	double C, P;

	cin >> N;

	double u = 0.0;

	for (int i = 0; i < N; i++) {
		cin >> C >> P;
		u += C / P;
	}

	if (u <= 1.0)
		cout << "OK\n";
	else
		cout << "FAIL\n";

	return 0;
}
