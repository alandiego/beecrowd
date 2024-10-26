#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
#include <ctype.h>
#include <algorithm>
#include <utility>
#include <iostream>
using namespace std;

int main(){
    double x1, y1, x2, y2, result;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    result = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));;
    
    printf("%.4lf\n", result);

    return 0;
}
