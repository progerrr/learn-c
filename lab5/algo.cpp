#include "algo.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void sort_choice() {
    const int length = 5;
    int array[length] = {30, 50, 20, 10, 40};

    for (int i0 = 0; i0 < length - 1; ++i0) {
        int minI = i0;

        for (int i = i0 + 1; i < length; ++i) {
            if (array[i] < array[minI])

                minI = i;
        }

        swap(array[i0], array[minI]);
    }

    for (int i = 0; i < length; ++i)
        cout << array[i] << ' ';
}
