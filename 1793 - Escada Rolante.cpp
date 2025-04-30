#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int N, i, j,pessoa, soma;
    vector<int> t;
	
    while(cin >> N  && N ){
        t.assign(1001, 0);
        soma = 0;
        for (i=0; i< N; i++){
            cin >> pessoa;
            for (j=pessoa; j< pessoa+10; j++)
                t[j]++;
        }
        for (auto x : t){
            if (x>0){
                soma++;
            }
        }
        cout << soma << '\n';
    }

	
	
    return 0;
}
