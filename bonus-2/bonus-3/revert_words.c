#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revert_words(char *str)
{
    if (!str)
        return;

    char *dup = strdup(str);
    if (!dup)
        return;

    int len = strlen(dup);
    int i = len - 1;
    int word_count = 0;

    while (i >= 0)
    {
        while (i >= 0 && (dup[i] == ' ' || dup[i] == '\t' || dup[i] == '\n'))
        {
            dup[i] = '\0';
            i--;
        }
        if (i < 0)
            break;

        while (i >= 0 && dup[i] != ' ' && dup[i] != '\t' && dup[i] != '\n')
        {
            i--;
        }
        char *word = &dup[i + 1];

        if (word_count > 0)
            printf(" ");
        printf("%s", word);
        word_count++;
    }
    printf("\n");
    free(dup);
}
