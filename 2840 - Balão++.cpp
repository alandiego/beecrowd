#include <bits/stdc++.h>

using namespace std;

using ll = long long;
double pi = 3.1415;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll R, L;
    
    cin >> R >> L;
    
    double volume = (4*pi*(R*R*R))/3;
    
    ll baloes = (ll) L / volume;
    
    cout << baloes << "\n" ;

    return 0;
}
