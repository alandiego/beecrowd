#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;

	while (cin >> N && N) {

		// maior valor da matriz = 2^(2N-2)
		int maior = 1 << (2*N - 2);

		// quantidade de dígitos
		int T = to_string(maior).size();

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				int valor = 1 << (i + j - 2);
				cout << setw(T) << valor;
				if (j < N) cout << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}
