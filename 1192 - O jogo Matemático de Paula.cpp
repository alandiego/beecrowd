#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	int digit1, digit2;
	char leter;
	int ans;
	
	cin >> N;
	
	while (N--){
	    cin >> digit1 >> leter >> digit2;
	    
	    if (digit1 == digit2)
	        ans = digit1 * digit2;
	    else if (isupper(leter))
	        ans = digit2 - digit1;
	    else
	        ans = digit1 + digit2;
	
	    cout << ans << '\n';
	}

    return 0;
}
