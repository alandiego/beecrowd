#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


int main(){
	int n, result, m;
	
	for (;;){
		cin >> n;
		if (n==0)
			return 0;
		
		
		for (m=1; m<n; m++){
			result=0;
			for (int i=1; i<n; i++){
				result = (result+m)%i;
			}
			if (result == 11)
				break;
		}
		
		printf("%d\n",m);
	}
	
	return 0;
	
}
