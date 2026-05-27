#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K;
    
    cin >> N >> K;
    
    vector<string> chamada(N);
    
    for (int i=0; i<N; i++)
        cin >> chamada[i];
    
    sort(chamada.begin(), chamada.end());
    
    cout << chamada[K-1] << endl;
    
    return 0;
}
