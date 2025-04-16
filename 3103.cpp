#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i;
    string linha;
    vector<int> digitos;
    
    
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;
	cin.ignore();
	
	while(N--){
	    digitos.assign(10,0);
	    cin >> linha;
	    
	    for (auto c: linha){
            digitos[c - '0']++;
	    }
	    
	    for (i=1; i<10;i++){
	        if (digitos[i]){
	            cout << i;
	            digitos[i]--;
	            break;
	        }
	    }
	    
	    for (i=0; i<10;i++){
	        while (digitos[i]--){
	            cout << i;
	        }
	    }
	    cout << '\n';
	}
	
    return 0;
}
