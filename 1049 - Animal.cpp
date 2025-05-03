#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string A, B, C;
	cin >> A >> B >> C;
	
	if (A == "vertebrado"){
	    if (B == "ave"){
	        if (C == "carnivoro")
	            cout  <<"aguia\n";
	        else
	            cout  <<"pomba\n";
	    } else {
	        if (C == "onivoro")
	            cout  <<"homem\n";
	        else
	            cout  <<"vaca\n";
	    }
	} else {
	    if (B == "inseto"){
	        if (C == "hematofago")
	            cout  <<"pulga\n";
	        else
	            cout  <<"lagarta\n";
	    } else {
	        if (C == "hematofago")
	            cout  <<"sanguessuga\n";
	        else
	            cout  <<"minhoca\n";
	    }
	}

    return 0;
}
