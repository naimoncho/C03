// #include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i ++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i ++;
        j ++;
    }
    dest[i] = '\0';
    return (dest);
}
// int main()
// {
//     char src[] = "Adioooos";
//     char dest[50] = "Holaa";
//     printf ("%s\n", strcat(dest, src));
//     printf ("%s", dest);
//     return 0;
// }
