#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int X, Y, menor, maior;
    vector<int> resposta;

    cin >> X >> Y;
    
    maior = max(X, Y);
    menor = min (X, Y);
    
    for (int i = menor+1; i < maior; i++){
        if (i%5==2 || i%5==3)
            resposta.push_back(i);
    }
    
    for (auto &r : resposta)
        cout << r << '\n';
    
    return 0;
}
