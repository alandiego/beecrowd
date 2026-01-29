#include <bits/stdc++.h>

using namespace std;


//verifica se da pra carregar os caminhoes com esse peso
bool carrega(vector<int> &paineis, int peso, int caminhoes){
    int pesoatual=0;
    for (auto &p : paineis){
        if (pesoatual+p <= peso)
            pesoatual+=p;
        else {
            pesoatual=p;
            caminhoes--;
            if (caminhoes==0)
                return false;
        }
    }
    return true;
}

int main (){
    int N, nPaineis, caminhoes, frete;
    
    cin >> N;
    while(N--){
        cin >> nPaineis >> caminhoes >> frete;
        
        vector<int> paineis(nPaineis);
        
        for(int i=0; i<nPaineis; i++){
            cin >> paineis[i];
        }
        
        long long lo = *max_element(paineis.begin(), paineis.end());
        long long hi = accumulate(paineis.begin(), paineis.end(),0);
        while (lo<hi){
            long long mid = (lo+hi)/2;
            carrega(paineis, mid, caminhoes) ? hi=mid : lo = mid+1;
        }
        
        cout << lo << " $" << hi*frete*caminhoes << '\n';  
        
    }
    
    return 0;
}
