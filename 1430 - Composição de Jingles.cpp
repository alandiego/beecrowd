#include <bits/stdc++.h>

using namespace std;

/*
w = 64
h = 32
q = 16
e = 8 
s = 4
t = 2 
x = 1
*/

int main(){
    string TC;
    
    while (cin >> TC && TC != "*"){
        int count = 0;
        int sum = 0;
        for (int i=1; i<TC.size(); i++){
            if (TC[i] == 'W')
                sum+=64;
            else if (TC[i] == 'H')
                sum+=32;
            else if (TC[i] == 'Q')
                sum+=16;
            else if (TC[i] == 'E')
                sum+=8;
            else if (TC[i] == 'S')
                sum+=4;
            else if (TC[i] == 'T')
                sum+=2;
            else if (TC[i] == 'X')
                sum+=1;
            else {
                if (sum == 64)
                    count++;
                sum=0;
            }
        }
        cout << count << endl;
        
    }
    
    return 0;
}
