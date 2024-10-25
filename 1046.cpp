#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


int main(){
	int x, y;
	
	cin >> x >> y;
	
	if (x == y)
		printf("O JOGO DUROU 24 HORA(S)\n");
	else if (x<y)
		printf("O JOGO DUROU %d HORA(S)\n", y-x);
	else
		printf("O JOGO DUROU %d HORA(S)\n", 24-x+y);
	
	return 0;
}
