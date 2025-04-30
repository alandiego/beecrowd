#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, Y, soma, i;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> X;

	while (cin >> Y){
	    if (Y > X){
	        soma = X;
	        for (i=1; ; i++){
	            soma += X+i;
	            if (soma > Y){
	               cout << i+1 << '\n';
	               return 0;
	            }
	        }
	    }
	}
	
    return 0;
}
