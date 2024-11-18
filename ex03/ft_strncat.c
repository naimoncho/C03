/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:23:38 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/17 17:32:03 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0' && j < nb)
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
//     unsigned int nb;    
//     nb = 4;
//     char src[] = "kachau";
//     char dest[20] = "yeah";
//     printf ("%s\n", strncat(dest,src,nb));
//     printf ("%s", dest);
//     return 0;
// }
