int str_cmp(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] && str1[i] == str2[i])
        i++;
    return (str1[i] == str2[i]);
}
