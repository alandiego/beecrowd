#include <bits/stdc++.h>

using namespace std;

bool primo(int n){
    int cnt =0;
    if (n <= 1)
        return false;
    else {

        // Count the divisors of n
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        // If n is divisible by more than 2 
        // numbers then it is not prime
        if (cnt > 0)
            return false;

        // else it is prime
        else
            return true;
    }
}

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int M, N;
	vector<int> moedas;
	int temp;
	int result;
	
	while (cin >> M){
	    for (int i=0; i<M; i++){
	        cin >> temp;
	        moedas.push_back(temp);
	    }
	    
	    cin >> N;
	    result=0;;
	    for (int i=0; M-(N*i)-1>=0; i++){
	        result += moedas[M-(N*i)-1];
	        
	    }
	    
	    if (primo(result))
    	    cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
    	else
    	    cout << "Bad boy! I’ll hit you.\n";
	    moedas.clear();
	}
    
	
    return 0;
}
