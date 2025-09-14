#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	char x;

	queue<char> a, b;
	stack<char> aux;
	int ans;            //contador para resp

	while (cin>> N) {
		if (!N) break; // sai caso 0
		
		ans=0;

		for (int i=0; i< N; i++) {
			cin >> x;
			a.push(x);
		}

		for (int i=0; i< N; i++) {
			cin >> x;
			b.push(x);
			ans++;
			cout << 'I';
			aux.push(a.front());
			a.pop();

			while (!b.empty() && !aux.empty() && aux.top() == b.front()) {
				ans++;
				cout << 'R';
				aux.pop();
				b.pop();
			}
		}


		if(ans != N*2) { 
			cout << " Impossible" << endl;
		} else {
			cout << endl;
		}

		while (!a.empty()) a.pop(); // zera a fila
		while (!b.empty()) b.pop(); // zera a fila
		while (!aux.empty()) aux.pop(); // zera a pC-lha


	}

	return 0;
}
