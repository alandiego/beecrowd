#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int X, Y, M;
	
	int xi, yi;
	
	while (cin >> X >> Y >> M){
	    for (int i=0; i<M; i++){
	        cin >> xi >> yi;
	        if (min(xi, yi) <= min(X, Y) && max(xi, yi) <= max(X, Y) )
	            cout << "Sim\n";
	        else
	            cout << "Nao\n";
	    }
	}
	
    return 0;
}
