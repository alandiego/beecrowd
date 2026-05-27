#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome;
    int dist, amigos;
    double media;
    
    amigos =0; media=0;
    
    while(getline(cin, nome)){
        cin >> dist;
        cin.ignore();
        
        media += dist;
        amigos++;
    }
    
    cout << fixed << setprecision(1) << (double) (media/amigos) << endl;
    
    return 0;
}
