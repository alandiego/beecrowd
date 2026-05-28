#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll fat[21] = {1};
    
    for (int i=1; i<21; i++)
        fat[i] = fat[i-1] * i;
        
    int n, m;
    
    while (cin >> n >> m){
        cout << fat[n] + fat[m] << endl;
    }
    
}
