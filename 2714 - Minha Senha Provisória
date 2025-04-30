#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TC;
    long long int result;
    string ra;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	bool valido;
	
	cin >> TC ;
	cin.ignore();
	
	while (TC--){
	    cin >> ra;
	    valido = true;
	    if (ra.size() == 20 && ra[0]=='R' && ra[1]=='A'){
	        for (int i=2; i< ra.size(); i++){
	            if (!isdigit(ra[i])){
	                valido = false;
	                break;
	            }
	        }

	    } else {
	        valido = false;
	    }
	    if (valido){
	        string temp = ra.substr(2);
	        result = stoll(temp);
	        cout << result << "\n" ;
	    } else {
	        cout <<"INVALID DATA\n" ;
	    }
	}

    return 0;
}
