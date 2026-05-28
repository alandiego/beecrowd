#include <bits/stdc++.h>

using namespace std;

int v[10005];
int N;

bool ordenado(){
    for (int i=1; i<=N; i++)
        if (v[i]!=i) return false;
        
    return true;
}

int main()
{

    while (cin >> N && N){
        int cont=0;
        do{
            for (int i=1; i<=N; i++)
                cin >> v[i];
            cont++;
        } while (!ordenado()); 
        cout << cont << endl;
    }

    return 0;
}
