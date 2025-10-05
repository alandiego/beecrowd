#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int K;
	int X, Y, N, M;
	
	
	while (cin >> K){
	    if (K == 0) break;
	    
	    cin >> N >> M;
	    
	    for (int i=0; i< K; i++){
	        cin >> X >> Y;

	        if (X==N || Y==M)
	            cout << "divisa\n";
	        else if (X>N && Y>M)
	            cout << "NE\n";
	        else if (X<N && Y>M)
	            cout << "NO\n";
	        else if (X<N && Y<M)
	            cout << "SO\n";
	        else
	            cout << "SE\n";
	        
	    }
	}

    return 0;
}
