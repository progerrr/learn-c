#include "algo.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
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

    for (int i = 0; i < length; i++) {
        b[i] = arr[i];
    }

    cout << endl;
}

void sort_minmax() {
    cout << "Selection sort: ";
    int arr[5];
    int length = 5;
    int n = 0, k = 0;

    for (int i0 = 0; i0 < length - 1; i0++) {
        int minI = i0;

        for (int i = i0 + 1; i < length; i++) {

            if (arr[i] < arr[minI]) {
                minI = i;
            }
            k++;
        }
        if (arr[i0] != arr[minI]) {
            swap(arr[i0], arr[minI]);
            n++;
        }
    }

    cout << endl;

    for (int i = 0; i < length; i++)
        cout << arr[i] << ' ';

    cout << endl;

    cout << "Number of compares: " << k << endl;
    cout << "Number of transpositions: " << n << endl << endl;
}

void sort_minmax_revert() {
    cout << "Selection sort in another order: ";
    int arr[5];
    int length = 5;
    int n = 0, k = 0;

    for (int i0 = 0; i0 < length - 1; i0++) {
        int maxI = i0;

        for (int i = i0 + 1; i < length; i++) {

            if (arr[i] > arr[maxI]) {
                maxI = i;
            }
            k++;
        }
        if (arr[i0] != arr[maxI]) {
            swap(arr[i0], arr[maxI]);
            n++;
        }
    }

    cout << endl;

    for (int i = 0; i < length; i++)
        cout << arr[i] << ' ';

    cout << endl;

    cout << "Number of compares: " << k << endl;
    cout << "Number of transpositions: " << n << endl << endl;
}

void sort_bubble() {
    cout << "Bubble sort: ";
    int b[5];
    int length = 5;
    int m, i, j, k = 0, n = 0;

    for (int i = 0; i < length - 1; i++) {
        int exit = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                m = b[j];
                b[j] = b[j + 1];
                b[j + 1] = m;
                n++;
                exit = 1;
            }
            k++;
        }
        if (exit == 0)
            break;
    }

    cout << endl;

    for (int i = 0; i < length; i++)
        cout << b[i] << ' ';

    cout << endl;

    cout << "Number of compares: " << k << endl;
    cout << "Number of transpositions: " << n << endl << endl;
}
void sort_bubble_revert() {
    cout << "Bubble sort in another order: ";
    int b[5];
    int length = 5;
    int m, i, j, k = 0, n = 0;

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (b[j] < b[j + 1]) {
                m = b[j];
                b[j] = b[j + 1];
                b[j + 1] = m;
                n++;
            }
            k++;
        }
    }

    cout << endl;

    for (int i = 0; i < length; i++)
        cout << b[i] << " ";

    cout << endl;

    cout << "Number of compares: " << k << endl;
    cout << "Number of transpositions: " << n << endl << endl;
}

void dynamic_array(int *&darr1, int *&darr2, int length) {

    int i, rnum;
    darr1 = (int *)malloc(length * sizeof(int));
    darr2 = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
        getrandom(&rnum, 4, 0);
        darr1[i] = 1 + (rnum % (10));
    }
    cout << endl;
    for (int i = 0; i < length; i++) {
        darr2[i] = darr1[i];
    }
}

void dynamic_minmax(int *darr1, int length) {

    cout << "Selection sort: ";
    int n = 0, k = 0, i;

    for (int i0 = 0; i0 < length - 1; i0++) {
        int minI = i0;

        for (int i = i0 + 1; i < length; i++) {

            if (darr1[i] < darr1[minI]) {
                minI = i;
            }
            k++;
        }
        if (darr1[i0] != darr1[minI]) {
            swap(darr1[i0], darr1[minI]);
            n++;
        }
    }

    cout << endl;

    cout << "Number of compares: " << k << endl;
    cout << "Number of transpositions: " << n << endl << endl;
}

void dynamic_bubble(int *darr2, int length) {
    cout << "Bubble sort: ";
    int m, i, j, k = 0, n = 0;

    for (int i = 0; i < length - 1; i++) {
        int exit = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (darr2[j] > darr2[j + 1]) {
                m = darr2[j];
                darr2[j] = darr2[j + 1];
                darr2[j + 1] = m;
                n++;
                exit = 1;
            }
            k++;
        }
        if (exit == 0)
            break;
    }

    cout << endl;

    cout << "Number of compares: " << k << endl;
    cout << "Number of transpositions: " << n << endl << endl;
}
