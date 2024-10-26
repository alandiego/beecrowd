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
    int tempo, vm;
    double result;
    cin >> tempo >> vm;
    result = (tempo*vm)/12.0;
    printf("%.3lf\n", result);

    return 0;
}
