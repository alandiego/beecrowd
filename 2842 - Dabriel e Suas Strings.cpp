#include <bits/stdc++.h>

using namespace std;

#define MAXA 1010
#define MAXB 1010

const int INF = 0x3f3f3f3f;

string A, B;

int memo[MAXA][MAXB];

int n, m;

int pd(int i, int j){

    if (i==n || j==m) return 0;

    int& pdm = memo[i][j];
    if (pdm!=-1) return pdm;

	pdm = 0;

	if (A[i]==B[j]) 
		pdm = max(pdm, 1 + pd(i+1, j+1));

    return pdm = max({pdm, pd(i+1, j), pd(i, j+1)} );
}



int main (){
    
    cin >> A >> B;
    n = A.size();
    m = B.size();

    memset(memo, -1, sizeof(memo));

    cout << n + m - pd(0,0) << endl;

    return 0;
}
