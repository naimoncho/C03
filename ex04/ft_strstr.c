// #include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int save;

    i = 0;
    if (to_find[0] == '\0')
        return str;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[0])
        {
            save = i;
            j = 0;
            while(str[i + j] == to_find[j] && to_find[j] != '\0')
            {
                j ++;
            if (to_find[j] == '\0')
                return(&str[save]);
            }
        }
        i ++;
    }
    return (NULL);
}
// int main()
// {
//     char str[] = "hola que tal";
//     char to_find[] = "t";
//     printf ("%s\n", strstr(str,to_find));
//     printf ("%s\n", ft_strstr(str,to_find));
//     return 0;
// }