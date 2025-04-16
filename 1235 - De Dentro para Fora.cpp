#include <bits/stdc++.h>

using namespace std;

int main()
{
    	int N, half;
    	string line;
    	string first;
    	string second;
	
    	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;
	cin.ignore();
	
	while (N--){
	    getline(cin, line);
	    
	    half = line.size()/2;
	    //receive the first half of the string
	    first = line.substr(0, half);
	    //receive the second falf
	    second = line.substr(half);
	    
	    //reverse of each half
	    reverse(first.begin(), first.end());
	    reverse(second.begin(), second.end());
	    
	    cout << first << second << '\n';
	    
	}
	
    return 0;
}
