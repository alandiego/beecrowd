#include <bits/stdc++.h>
using namespace std;

int main (){
    int N;
    
    cin >> N;
    
    while(N--){
        string palavra;
        cin >> palavra;
        
        sort(palavra.begin(), palavra.end());
        
        do {
            cout << palavra << '\n';
        } while (next_permutation(palavra.begin(), palavra.end()));
        
        cout << '\n';
    }
}
