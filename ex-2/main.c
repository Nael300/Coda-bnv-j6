#include <stdio.h>
#include <stdlib.h>

int str_cmp(char *str1, char *str2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    }

    return 0;
}

int main()
{
    char str1[] = "hello world !";
    char str2[] = "hello world !";

    int i = str_cmp(str1, str2);
    printf("%d\n", i);

    exit(0);
}
