#include "algo.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int iRandom(int a, int b) { return a + (b - a + 1) * rand() / RAND_MAX; }

void sort_minmax() {

  int length = 5, i = 0;

  int *arr = new int[length];
  for (int i = 0; i < length; i++) {
    arr[i] = 0 + (rand() % (10));
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
