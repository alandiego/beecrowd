#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int Q, E;
    vector<int> escritorios;
    int temp;
    
    cin >> Q >> E;
    
    escritorios.assign(1001, 0);
    
    while(E--){
        cin >> temp;
        escritorios[temp]++;
    }
    
    while (Q--){
        cin >> temp;
        if (escritorios[temp])
            cout << "0\n";
        else {
            escritorios[temp]++;
            cout << "1\n";
        }
    }
        
    return 0;
}
