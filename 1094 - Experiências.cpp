#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    int quantia;
    char tipo;
    int total;
    map<char, int> cobaias;

    cin >> N;
    
    cobaias['R'] = 0;
    cobaias['C'] = 0;
    cobaias['S'] = 0;
    
    while (N--){
        cin >> quantia >> tipo;
        cobaias[tipo] += quantia;
    }
    
    total = cobaias['R'] + cobaias['C'] + cobaias['S'];
        
    cout << "Total: " << total <<" cobaias\n";
    cout << "Total de coelhos: " << cobaias['C']<<"\n";
    cout << "Total de ratos: " << cobaias['R']<<"\n";
    cout << "Total de sapos: " << cobaias['S']<<"\n";
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << ((double) cobaias['C']/total)*100 <<" %\n";
    cout << "Percentual de ratos: " << ((double) cobaias['R']/total)*100 <<" %\n";
    cout << "Percentual de sapos: " << ((double) cobaias['S']/total)*100 <<" %\n";
        
    return 0;
}
