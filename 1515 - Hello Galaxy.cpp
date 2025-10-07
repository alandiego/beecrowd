#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    
    while(cin >> t && t){
        
        vector<pair<int, string>> planets(t);
        
        for (int i=0; i<t; i++){
            string planet_name;
            int rmessage, delay;
            cin >> planet_name >> rmessage >> delay;
            planets[i] = {rmessage-delay, planet_name};
        }
        
        sort(planets.begin(), planets.end());
        
        cout << planets[0].second << "\n";
    }
 
    return 0;   
}
