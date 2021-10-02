#include "algo.h"

int main() {
    double eps;
    eps = 0.000001;
    fpd(eps, 1);
    fpd(eps / 100, 1);
    fpd(eps, 10);

    fn(eps, 1);
    fn(eps / 100, 1);
    fn(eps, 10);

    return 0;
}