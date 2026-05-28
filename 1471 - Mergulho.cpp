#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, R;
    
    while (cin >> N >> R){
        set<int> mergulhadores;
        int voluntario;
        
        for (int i=0; i<R; i++){
            cin >> voluntario;
            mergulhadores.insert(voluntario);
        }
        
        if (mergulhadores.size() == N)
            cout << "*\n";
        else {
            for (int i=1; i<=N; i++){
                if (!mergulhadores.contains(i))
                    cout << i<< " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}
