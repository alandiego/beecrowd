#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int N;
    string p1, p2;
    string result;
    cin >> N;
    
    while (N--){
        cin >> p1 >> p2;
        
        int menor = min(p1.size(), p2.size());
        int i=0;
        for ( ; i < menor; ++i){
            cout << p1[i];
            cout << p2[i];
        }
        
        if (p1.size() < p2.size())
            result = p2.substr(i);
        else
            result = p1.substr(i);
        
        cout << result << "\n";
    }

    return 0;
}
