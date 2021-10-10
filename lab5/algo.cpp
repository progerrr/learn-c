#include "algo.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sys/random.h>

using namespace std;

void sort_minmax() {

    int length = 5, i , rnum;

    int *arr = new int[length];
    for (int i = 0; i < length; i++) {
        getrandom(&rnum, 4, 0);
        arr[i] = 1 + (rnum % (10));
        cout << arr[i] << " ";
    }

    cout << endl;
    for (int i0 = 0; i0 < length - 1; i0++) {
        int minI = i0;

        for (int i = i0 + 1; i < length; i++) {

            if (arr[i] < arr[minI])
                minI = i;
        }

        swap(arr[i0], arr[minI]);
    }

    for (int i = 0; i < length; i++)
        cout << arr[i] << ' ';

    delete[] arr;
}
