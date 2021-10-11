#include "algo.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sys/random.h>

using namespace std;

void create_array() {
    int i, j, rnum;
    int arr[5], b[5];
    int length = 5;

    for (int i = 0; i < length; i++) {
        getrandom(&rnum, 4, 0);
        arr[i] = 1 + (rnum % (10));
        cout << arr[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < length; i++) {
        b[i] = arr[i];
    }
}

void sort_minmax() {
    int arr[5];
    int length = 5;
    int n = 0;
    for (int i0 = 0; i0 < length - 1; i0++) {
        int minI = i0;

        for (int i = i0 + 1; i < length; i++) {

            if (arr[i] < arr[minI]) {
                minI = i;
                n++;
            }
        }

        swap(arr[i0], arr[minI]);
    }
    cout << endl;

    for (int i = 0; i < length; i++)
        cout << arr[i] << ' ';

    cout << endl << n << endl << endl;
}

void sort_minmax_revert() {
    int arr[5];
    int length = 5;
    int n = 0;
    for (int i0 = 0; i0 < length - 1; i0++) {
        int maxI = i0;

        for (int i = i0 + 1; i < length; i++) {

            if (arr[i] > arr[maxI]) {
                maxI = i;
                n++;
            }
        }

        swap(arr[i0], arr[maxI]);
    }
    cout << endl;

    for (int i = 0; i < length; i++)
        cout << arr[i] << ' ';

    cout << endl << n << endl << endl;
}

void sort_bubble() {
    int b[5];
    int length = 5;
    int k, i, j, n = 0;
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                k = b[j];
                b[j] = b[j + 1];
                b[j + 1] = k;
                n++;
            }
        }
    }
    cout << endl;

    for (int i = 0; i < length; i++)
        cout << b[i] << ' ';

    cout << endl << n;
}