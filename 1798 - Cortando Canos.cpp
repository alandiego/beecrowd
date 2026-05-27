#include <bits/stdc++.h>

using namespace std;

#define MAXN 5020 
#define MAXT 5020 

const int INF = 0x3f3f3f3f;

int memo[MAXN][MAXT];

int n, t;

int C[MAXN], V[MAXN];

int pd(int indx, int tamanho){
    if (tamanho<0) return -INF;
    if (indx==n) return 0;

    int& pdm = memo[indx][tamanho];
    if (pdm!=-1) return pdm;

    return pdm = max( pd(indx, tamanho - C[indx]) + V[indx], pd(indx+1, tamanho) );
}

int main (){
    cin >> n >> t;

    for (int i=0; i<n; i++){
        cin >> C[i] >> V[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << pd(0, t) << endl;
}
