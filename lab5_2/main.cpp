#include "algo.h"
#include <iostream>
#include <sys/random.h>

int main() {
    int *darr1, *darr2;
    int length;

    std::cout << "STATIC array:" << std::endl;
    create_array();


    sort_minmax();
    sort_minmax();
    sort_minmax_revert();

    sort_bubble();
    sort_bubble();
    sort_bubble_revert();

    std::cout << "DYNAMIC array:" << std::endl;
    for (length=5; length<=500; length*=10) {
        std::cout << "LENGTH = " << length;
    create_dynamic_array(darr1, darr2, length);
    sort_minmax_dynarray(darr1, length);
    free(darr1);
    sort_bubble_dynarray(darr2, length); 
    free(darr2);
    }

    return 0;
}