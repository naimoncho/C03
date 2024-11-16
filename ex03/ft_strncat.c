// #include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int     i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i  ++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i ++;
        j ++;
    }
    dest[i] = '\0';
    return(dest);
}
// int main()
// {
//     unsigned int nb;    
//     nb = 4;
//     char src[] = "kachau";
//     char dest[20] = "yeah";
//     printf ("%s\n", strncat(dest,src,nb));
//     printf ("%s", dest);
//     return 0;
// }