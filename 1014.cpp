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
    double x, y, result;
    cin >> x >> y;
    result = x/y;
    printf("%.3lf km/l\n", result);

    return 0;
}
