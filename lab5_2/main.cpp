#include "algo.h"
#include <iostream>
#include <sys/random.h>
using namespace std;
int main() {
    int *darr1, *darr2;

    std::cout << "STATIC array:" << std::endl;
    // create_array();

    int i, j, rnum;
    int arr[5], b[5];
    int length = 5;

    for (int i = 0; i < length; i++) {
        getrandom(&rnum, 4, 0);
        *(arr + i) = 1 + (rnum % (10));
        cout << *(arr + i) << " ";
    }

    for (int i = 0; i < length; i++) {
        *(b + i) = *(arr + i);
    }

    cout << endl;

    sort_minmax(arr);
    sort_minmax(arr);
    sort_minmax_revert(arr);

    sort_bubble(b);
    sort_bubble(b);
    sort_bubble_revert(b);

    std::cout << "DYNAMIC array:" << std::endl;

    for (length = 5; length <= 500; length *= 10) {
        std::cout << "LENGTH = " << length;

        create_dynamic_array(darr1, darr2, length);
        sort_minmax_dynarray(darr1, length);
        free(darr1);
        sort_bubble_dynarray(darr2, length);
        free(darr2);
    }

    return 0;
}