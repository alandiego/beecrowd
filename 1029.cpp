#include <iostream>
#include <vector>
#include <algorithm> 
#include <stdio.h>

using namespace std;

int main()
{
    int num_cals[40];
    int result[40];
   
    num_cals[0] = 0;
    num_cals[1] = 0;
    result[0] = 0;
    result[1] = 1;;
    
    for (int i = 2; i<40; i++){
        num_cals[i] = num_cals[i-1] + num_cals[i-2] + 2;
        result[i] = result[i-1] + result[i-2];
    }
   
   int N; //numero de casos teste
   int X; //valor caso teste
   
   
   cin >> N;
   
   while (N > 0){
       cin >> X;
       
       printf("fib(%d) = %d calls = %d\n", X, num_cals[X], result[X]);
       N--;
   }
   

    return 0;
}
