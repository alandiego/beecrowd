#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a, b, q, r;
	
    cin >> a >> b;
    
    q = a / b;
    r = a % b;
    
    if (r < 0) {
        if (b > 0) {
            q--;
            r += b;
        } else {
            q++;
            r -= b;
        }
    }
    
    
    cout << q << " " << r << "\n";
	 
    return 0;
}
