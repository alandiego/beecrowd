#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, I, F, resp=0;
    
    cin >> N >> I >> F;
    
    vector<int> valores(N);
    
    for (int i=0; i<N; i++){
        cin >> valores[i];
    }
    
    for (int i=0; i< N-1; i++){
        for (int j=i+1; j<N; j++){
            if (valores[i]+valores[j]>=I && valores[i]+valores[j]<=F)
                resp++;
        }
    }
    
    
    cout << resp << '\n'; 

    return 0;
}
