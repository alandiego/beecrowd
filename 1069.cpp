#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--){
        stack<char> diamante;
        int qtdDiamantes = 0;
        string analisar;
        cin >> analisar;
        for (auto temp : analisar){
            if (temp == '<')
                diamante.push('<');
            if (temp == '>' && !diamante.empty()){
                qtdDiamantes++;
                diamante.pop();
            } 
        }
        cout << qtdDiamantes << endl;
    }
    
    return 0;
}
