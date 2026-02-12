#include <bits/stdc++.h>

using namespace std;

#define MAXN 30
#define MAXM 1000005

const int INF = 0x3f3f3f3f;

int memo[MAXM];

int n, troco;

int moedas[MAXN];

int pd(int qtd) {
    memo[0]=0;
    for (int i=0; i<n; i++){
        int c = moedas[i];
        for (int j=c; j<= qtd; j++){
            memo[j] = min(memo[j], 1+memo[j-c]);
        }
    }
    return memo[qtd] == INF ? -1 : memo[qtd];
}

int main () {
    int tc;
    cin >> tc;
	while (tc--) {
		cin >> n >> troco;

		for (int i=0; i<n; i++) {
			cin >> moedas[i];
		}
        memset(memo, INF, sizeof(memo));
		cout << pd(troco) << "\n";
	}
}
