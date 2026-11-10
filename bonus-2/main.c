#include <stdio.h>
#include <stdlib.h>
#include "count_words.h"

int main()
{
    char str1[] = "Hello world from C";
    char str2[] = "   C   programming   is cool!   ";

    printf("Test 1: \"%s\" -> %d mots\n", str1, count_words(str1));
    printf("Test 2: \"%s\" -> %d mots\n", str2, count_words(str2));

    return (0);
}
