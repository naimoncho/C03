unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int s_len;
    unsigned int d_len;

    i = 0;
    s_len = 0;
    d_len = 0;
    while (dest[d_len] != '\0' && d_len < size)
    {
        d_len ++;
    }
    while (src[s_len] != '\0')
    {
        s_len ++; 
    }
    if (d_len >= size)
        return (size + s_len);
    while (src[i] != '\0' && (d_len + i + 1) < size - 1)
    {
        dest[d_len +  i] = src[i];
        i ++;
    }
    if (d_len + i < size)
        dest[d_len + i] =  '\0';
    return (d_len + s_len);
}