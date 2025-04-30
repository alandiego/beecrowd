#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	int X;
	vector<int> valores;
	valores.assign(2001, 0);
	
	cin >> N;
	
	while (N--){
	    cin >> X;
	    valores[X]++;
	    
	}
	
	for (int i=1; i< 2001; i++){
	    if (valores[i])
	        cout << i << " aparece " << valores[i] << " vez(es)\n";
	}

    return 0;
}
