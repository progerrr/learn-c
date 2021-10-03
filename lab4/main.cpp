#include "algo.h"
#include <iostream>

typedef void (*algo)(double, int, int);

int main() {

    double eps = 0.000001;
    algo funcs[] = {fpd, fn};
    int count_calls = 3;
    double args1[] = {eps, eps / 100, eps};
    int args2[] = {1, 1, 10};
    int args3[] = {6, 8, 7};
    
    for (int j = 0; j < sizeof(funcs) / sizeof(algo); j++) {
        for (int i = 0; i < count_calls; i++) {
            funcs[j](args1[i], args2[i], args3[i]);
        }
    }

    return 0;
}