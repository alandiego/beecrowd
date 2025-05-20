#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int N;
    bool primeiro = true;
    
    while (cin >> N && N){
        vector<string> palavras(N);
        int maior=0;
        
        if (!primeiro)
            cout << "\n";
        
        for (int i=0; i<N; ++i){
            cin >> palavras[i];
            maior = max((int) palavras[i].size(), maior);
        }
        
        for (int i=0; i<N; ++i){
            for (int j=0; j<maior-palavras[i].size(); ++j)
                cout << ' ';
            cout << palavras[i] << "\n";
        }
        
        primeiro = false;
        
    }

    return 0;
}
