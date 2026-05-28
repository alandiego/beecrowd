#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, v[10000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    int i, j, maior = 1; // menor sequencia possível é 1
    for (i=0; i<N; i++){
        for (j=i+1; j<N && v[i]==v[j]; j++){
            
        }
        maior = max(maior, j-i);
    }

    cout << maior << endl;

    return 0;
}
