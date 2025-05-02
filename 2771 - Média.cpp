#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, K;
	vector<int> valores;
	vector<double> medias;
	int temp;
	
	while (cin >> N >> K){
	    
	    for (int i=0; i<N; i++){
	        cin >> temp;
	        valores.push_back(temp);
	    }
	    
	    for (int i = 0; i < N - 2; ++i) {
            for (int j = i + 1; j < N - 1; ++j) {
                for (int k = j + 1; k < N; ++k) {
                    medias.push_back((valores[i]+valores[j]+valores[k])/3.0);
                }
            }
        }
	    
	    nth_element(medias.begin(), medias.end() - K, medias.end());
	    
	    cout << fixed  << setprecision(1) << medias[medias.size()-K] << "\n";
	    
	    valores.clear();
	    medias.clear();
	    
	}
	
    return 0;
}
