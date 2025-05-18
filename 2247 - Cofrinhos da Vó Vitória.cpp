#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, J, Z, diferenca, TC=0;
	
	while (cin >> N && N){
	    diferenca=0;
	    cout << "Teste " << ++TC << "\n";
	    
	    for (int i=0; i<N; ++i){
	        cin >> J >> Z;
	        diferenca+= J-Z;
	        cout << diferenca << "\n";
	    }
	    cout << "\n";
	}

    return 0;
}
