#include <bits/stdc++.h>
using namespace std;

int a[60], b[60];
int memo[60][60];

int n, m;

int pd(int i, int j) {
	if (i == n || j == m) return 0;

	int &res = memo[i][j];
	if (res != -1) return res;

	res = 0;

	if (a[i] == b[j]) {
		// Conta apenas se for parte de uma substring (elementos consecutivos)
		res = 1 + pd(i + 1, j + 1);
	}

	// NC#o testa saltos como em subsequC*ncia, apenas reinicia da prC3xima posiC'C#o
//	pd(i + 1, 0); // Para garantir memoizaC'C#o completa, mesmo se nC#o for chamado no retorno
//	pd(0, j + 1);

	return res;
}

int main() {
	string x, y;

	while (getline(cin, x) && getline(cin, y)) {

		n = x.size(); m = y.size();

		for (int i = 0; i < n; i++) a[i] = x[i];
		for (int i = 0; i < m; i++) b[i] = y[i];

		memset(memo, -1, sizeof(memo));

		int max_substring = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				max_substring = max(max_substring, pd(i, j));

		cout << max_substring << "\n";
	}
	return 0;
}

