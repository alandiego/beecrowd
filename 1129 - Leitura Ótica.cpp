#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, A, B, C, D, E;
    
    while (cin >> N && N){
        
        for (int i=0; i<N; ++i){
            cin >> A >> B >> C >> D >> E;
            
            A <= 127 ? A=1 : A=0;
            B <= 127 ? B=1 : B=0;
            C <= 127 ? C=1 : C=0;
            D <= 127 ? D=1 : D=0;
            E <= 127 ? E=1 : E=0;
            
            if (A+B+C+D+E != 1)
                cout << "*\n";
            else if (A)
                cout << "A\n";
            else if (B)
                cout << "B\n";
            else if (C)
                cout << "C\n";
            else if (D)
                cout << "D\n";
            else 
                cout << "E\n";
                
        }
    }
    
    return 0;
}
