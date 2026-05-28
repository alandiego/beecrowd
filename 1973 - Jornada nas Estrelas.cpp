#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;


typedef long long ll;

int main() {
	ll N, total=0, roubados=0;
	vi carneiros;
	vi atacado;
	cin >> N;

	for (int i=0; i<N; i++) {
		int carneiro;
		cin >> carneiro;
		carneiros.push_back(carneiro);
		total+=carneiro;
	}

    atacado.assign(N, 0);

	int indx = 0;
	while (true) {
		if (indx<0 || indx>=N) break;
		atacado[indx] = 1;
        if (carneiros[indx]==0) { 
            indx--;
            continue;
        }
		else if (carneiros[indx]--%2==0) indx--;
		else indx++;
		roubados++;
	}
	
	int ans = accumulate(atacado.begin(), atacado.end(), 0);

	cout << ans << ' ' << total-roubados << endl;

	return 0;
}
