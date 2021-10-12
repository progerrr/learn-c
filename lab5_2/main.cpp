#include "algo.h"
#include <iostream>
#include <sys/random.h>

int main() {
    int *darr1, *darr2;
    int length;
    std::cin>>length;

    std::cout << "STATIC array:" << std::endl;
    create_array();

    sort_minmax();
    sort_minmax();
    sort_minmax_revert();

    sort_bubble();
    sort_bubble();
    sort_bubble_revert();

    std::cout << "DYNAMIC array:";
    dynamic_array(darr1, darr2, length);

    dynamic_minmax(darr1, length);
    free(darr1);
    dynamic_bubble(darr2, length);
    free(darr2);

    return 0;
}