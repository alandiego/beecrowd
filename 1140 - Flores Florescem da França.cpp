#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string line;
    
    while (getline(cin, line) && line != "*") {
        bool tautogram = true;
        
        stringstream ss(line);
        vector<string> tokens;
        string token;
        
        while ( ss >> token)
            tokens.push_back(token);
        
        char fleter =  toupper(tokens[0].at(0));
        char temp;
        for (int i=1; i<tokens.size(); i++){
            temp = toupper(tokens[i].at(0));
            if (fleter != temp)
                tautogram = false;
        }
        
        char ans = (tautogram) ? 'Y' : 'N';
        
        cout << ans << "\n";
    }

    return 0;
}
