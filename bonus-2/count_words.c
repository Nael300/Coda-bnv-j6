int count_words(char *str)
{
    int i = 0;
    int count = 0;
    int in_word = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        i++;
    }
    return (count);
}
