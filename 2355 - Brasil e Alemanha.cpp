#include <bits/stdc++.h>

using namespace std;

int main() {
	long long N, brasil, alemanha;


	while (cin >> N && N) {

		brasil = N/90;
		alemanha = ceil(N*7/90.0);

		cout << "Brasil " << brasil << " x Alemanha " << alemanha << endl;
	}
	return 0;
}
