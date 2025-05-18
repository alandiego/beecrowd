#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, TC = 0;
    
    while (cin >> N && N) {
        
        cout << "Teste " << ++TC << "\n";
        int result= pow(2, N)-1;
        cout <<  result << "\n\n";;
    }

    return 0;
}
