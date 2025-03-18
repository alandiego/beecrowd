#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int MDC(int a, int b) {
  int R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  return b;
}

int main()
{
   int N; //numero de casos teste
   int F1, F2; // qtd de figurinhas
   
   cin >> N;
   
   for (int i=0; i< N; i++){
       cin >> F1 >> F2;
       
       cout << MDC(F1, F2) << endl;
   }
   

    return 0;
}
