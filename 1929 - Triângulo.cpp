#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int A, B, C, D;
	
	cin >> A >> B >> C >> D;
	
	if ((A+B > C && A+C > B && B+C > A) ||      //sem D
	    (A+B > D && A+D > B && B+D > A) ||      //sem C
	    (A+C > D && A+D > C && C+D > A) ||      //sem B
	    (B+C > D && B+D > C && C+D > B))        //sem A
	    cout << "S\n";
	else
	    cout << "N\n";

    return 0;
}
