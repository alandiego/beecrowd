#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
	  cin.tie(0);
	  cout.tie(0);

    string line;
    int package;
    while (cin >> line)
    {
        multiset<int> packages;
        while (cin >> line, line[0] != '0')
        {
            cin >> package;
            packages.insert(package);
        }
        for (auto &it : packages)
            cout << "Package " << setw(3) << setfill('0') << it << '\n';
        if (packages.size())
            cout << '\n';
    }
}
