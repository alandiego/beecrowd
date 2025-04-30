#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N; 
	int TC = 1;
	long long result =0;
	
	while (cin >> N && N != -1){
	    cout << "Teste " << TC << '\n';
	    result = pow(2, N)+1;
	    result = result * result;
	    cout << result << "\n\n" ;
	    TC++;
	}

    return 0;
}
