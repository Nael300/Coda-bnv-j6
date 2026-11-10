#ifndef SORT_NUMBERS_H
#define SORT_NUMBERS_H

void sort_numbers_real(int *numbers, const char *order);

#define _SORT_NUMBERS_CHOOSE(_1, _2, NAME, ...) NAME
#define sort_numbers(...) _SORT_NUMBERS_CHOOSE(__VA_ARGS__, _sort_numbers_2, _sort_numbers_1)(__VA_ARGS__)

#define _sort_numbers_1(arr) sort_numbers_real(arr, "asc")
#define _sort_numbers_2(arr, ord) sort_numbers_real(arr, ord)

#endif
