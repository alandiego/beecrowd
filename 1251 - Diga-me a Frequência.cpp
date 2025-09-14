#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string line;
    bool first = true;

    while (getline(cin, line)){
        map<int, int> temp;
        
        if (!first) cout << "\n";
        
        for (int i=0; i< line.size(); i++){
            int val = (int) line[i];
            temp[val]++;
        }
        
        vector<pair<int, int>> ans(temp.begin(), temp.end());
        
        sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second != b.second)
                return a.second < b.second; // Sorts in ascending order of the second element
            return a.first > b.first; // in case of a tie, returns the greater first element
        });
        
        for (auto const& [key, value] : ans) {
            cout << key << ' '  << value << "\n";
        }
        
        first=false;
    }
    
    return 0;
}
