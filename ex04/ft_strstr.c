#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int save;

    i = 0;
    j = 0;
    save = 0;
    while (str[i] != '\0' && to_find[j] != '\0')
    {
        if (str[i] != to_find[j])
        {
            save = 0;
            j = 0;
        }
        else
        {
            j++;
            if (save == 0)
                save = i;
        }
        i ++;
    }
    if (save != 0) 
        return(&str[save]);
    return (NULL);
}
// int main()
// {
//     char str[] = " to tus muerttos";
//     char to_find[] = "h";
//     printf ("%s\n", strstr(str,to_find));
//     printf ("%s\n", ft_strstr(str,to_find));
//     return 0;
// }