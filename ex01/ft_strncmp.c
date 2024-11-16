// #include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && (i < n))
    {
        if (s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i ++;
    }
    return(0);
}
// int main()
// {
//     unsigned int n;
//     n = 7;
//     char s1[] = "to tus muertos";
//     char s2[] = "tu tas muertos";
//     printf("%d\n", strncmp(s1,s2,n));
//     printf("%d", ft_strncmp(s1,s2,n));
// }