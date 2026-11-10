#include <stdio.h>
#include <stdlib.h>

void str_rev(char *str) {
    int len = 0;
    
    while (str[len] != '\0') {
        len++;
    }
    
    len--;
    
    while (len >= 0) {
        putchar(str[len]);
        len--;
    }
    
    putchar('\n');
}

int main()
{
    char str[] = "hello world !";
    str_rev(str);
    
    exit(0);
}
