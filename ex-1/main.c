#include <stdio.h>

int str_len(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char ma_chaine[] = "hello world !";
    int longueur = str_len(ma_chaine);
    printf("La longueur de la chaine est : %d\n", longueur);
    return 0;
}

