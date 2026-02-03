#include <bits/stdc++.h>
using namespace std;

int rafael(int x, int y) {
	return (3*x)*(3*x) + y*y;
}

int beto (int x, int y) {
	return 2*(x*x) + (5*y)*(5*y);
}

int carlos (int x, int y) {
	return -100*x + y*y*y;
}

int main() {
	int N;

	cin >> N;
	int x, y, r, b, c;

	for (int i=0; i<N; i++) {
		cin >> x >> y;
		r = rafael(x, y);
		b = beto(x, y);
		c = carlos (x, y);

		int maior = max({r, b, c});
		if (maior == r) {
			cout << "Rafael ganhou\n";
		} else if (maior == b) {
			cout << "Beto ganhou\n";
		} else {
			cout << "Carlos ganhou\n";
		}
	}



	return 0;
}
