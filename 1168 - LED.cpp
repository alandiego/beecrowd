#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
    int N;
    string painel;
    
    cin >> N;
    
    while (N--){
        cin >> painel;
        ll leds = 0;
        for (int i=0; i<painel.size(); ++i){
            if (painel[i]=='1')
                leds+=2;
            else if (painel[i]=='2')
                leds+=5;
            else if (painel[i]=='3')
                leds+=5;
            else if (painel[i]=='4')
                leds+=4;
            else if (painel[i]=='5')
                leds+=5;
            else if (painel[i]=='6')
                leds+=6;
            else if (painel[i]=='7')
                leds+=3;
            else if (painel[i]=='8')
                leds+=7;
            else if (painel[i]=='9')
                leds+=6;
            else
                leds+=6;
        }
        cout << leds << " leds\n";
    }

    return 0;
}
