#include "algo.h"
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

static double f(double x, int k) { return x - k * cos(x); }

void fpd(double eps, int k, int precision) {
    double x, a, b;
    int i;

    i = 0;
    cout << "Input line [a b]:" << endl;
    cin >> a >> b;

    if (f(a, k) * f(b, k) > 0)
        cout << "Error" << endl;
    else {
        while (fabs(a - b) > eps) {
            x = (a + b) / 2;

            if (f(x, k) * f(a, k) <= 0)
                b = x;
            else
                a = x;

            i += 1;
        }

        cout << setprecision(precision) << "x= " << x << endl;
        cout << "i = " << i << endl;
    }
}

static double df(double x, int k) { return 1 + k * sin(x); }

void fn(double eps, int k, int precision) {
    double x0;
    int i = 0;

    cout << "Input a: "<<endl;
    cin >> x0;

    double x1 = x0 - f(x0, k) / df(x0, k);
    while (fabs(x1 - x0) > eps) {
        x0 = x1;
        x1 = x0 - f(x0, k) / df(x0, k);
        i += 1;
    }

    cout << setprecision(precision) << "x= " << x1 << endl;
    cout << "i= " << i << endl;
}