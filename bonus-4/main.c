#include <stdlib.h>
#include "sort_numbers_asc.h"

int main()
{
    int numbers1[] = {5, -6, 29, 34, 0};
    int numbers2[] = {45, -128, 496, 11, -90};

    sort_numbers_asc(numbers1);
    sort_numbers_asc(numbers2);
    exit(0);
}
