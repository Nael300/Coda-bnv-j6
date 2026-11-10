#include <stdio.h>

void sort_numbers_asc(int *numbers)
{
    int size = 5;
    int i = 0;
    int swapped = 1;
    int temp;

    while (swapped)
    {
        swapped = 0;
        i = 0;
        while (i < size - 1)
        {
            if (numbers[i] > numbers[i + 1])
            {
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
    }

    i = 0;
    while (i < size)
    {
        printf("%d", numbers[i]);
        if (i < size - 1)
            printf(" ");
        i++;
    }
    printf("\n");
}
