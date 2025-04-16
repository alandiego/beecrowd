#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int N;
    string A, B;
    
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    cin >> N;
    
    while (N--){
        cin >> A >> B;
        
        if (A.size() < B.size())
            cout << "nao encaixa\n";
        else {
            string aux = A.substr(A.size() - B.size());
            if (aux == B)
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        }
        
    }

    return 0;
}
