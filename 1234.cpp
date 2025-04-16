#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    bool upper;
    string line;
    
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    while (getline(cin, line)){
        upper=true;
        for (int i=0; i<line.size(); i++){
            if (isalpha(line[i])){
                if (upper) line[i] = toupper(line[i]);
                else line[i] = tolower(line[i]);
                upper = !upper;
            }
        }
        cout << line << "\n";
    }

    return 0;
}
