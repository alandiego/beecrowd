#include <bits/stdc++.h>

using namespace std;

#define MAXN 25
#define MAXS 35

const int INF = 0x3f3f3f3f;

int memo[MAXN][MAXS];

int n, s;

int tempo_entrega[MAXN], qtd_pizzas[MAXN];

int pd(int indx, int capacidade) {
	if (capacidade<0) return -INF;
	if (indx==n) return 0;

	int& pdm = memo[indx][capacidade];
	if (pdm!=-1) return pdm;

	return pdm = max( pd(indx+1, capacidade - qtd_pizzas[indx]) + tempo_entrega[indx], pd(indx+1, capacidade) );
}

int main () {

	while (cin >> n && n) {
		cin >> s;

		for (int i=0; i<n; i++) {
			cin >> tempo_entrega[i] >> qtd_pizzas[i];
		}

		memset(memo, -1, sizeof(memo));

		cout << pd(0, s) << " min.\n";
	}
}
