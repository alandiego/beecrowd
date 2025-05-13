#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, C;
	while (cin >> A >> C && A && C) {
		vector<int> bloco(C);
		for (int i = 0; i < C; ++i)
			cin >> bloco[i];

        //quantidade de ativações do laser pra acertar a primeira altura
		int qtd = A - bloco[0];
		for (int i = 1; i < C; ++i) {
		    //toda vez que tem uma diminuição na altura do bloco será necessaria novas ativações
			if (bloco[i] < bloco[i - 1]) {
				qtd += bloco[i - 1] - bloco[i];
			}
		}

		cout << qtd << "\n";
	}
	return 0;
}
