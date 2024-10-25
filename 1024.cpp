#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

void primeira(string *str){
	for (int i=0; i<str->size();i++){
		if (isalpha(str->at(i))){
			str->at(i) = str->at(i)+3;
		}
	}
}

void terceira(string *str){
	for (int i=str->size()/2; i<str->size();i++){
		str->at(i)--;
	}
}


int main(){
	long long int n;
	string line;

	cin >> n;
	
	cin.ignore();
	
	while (n--){
		getline(cin, line);
		
		primeira(&line);
		reverse(line.begin(), line.end());//segunda
		terceira(&line);
		
		cout << line << endl;

	}

	return 0;	
}
