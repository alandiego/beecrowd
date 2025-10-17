#include <bits/stdc++.h>

using namespace std;

bool is_special(char ch) {
    ch = tolower(ch);
	return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 's');
}

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		string S;
        int ans = 1;
        cin >> S;
		for (char c : S) {
			if (is_special(c))
			    ans *= 3;
			else
			    ans *= 2;
		}
		cout << ans << "\n";
	}

	return 0;
}
