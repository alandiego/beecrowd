#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	int Mary, John, temp;
	
	while (cin >> N && N){
	    John = 0;
	    for (int i=0; i< N; i++){
	        cin >> temp;
	        John += temp;
	    }
	    Mary = N - John;
	
	    cout << "Mary won "<< Mary <<" times and John won " << John <<" times\n";
	}

    return 0;
}
