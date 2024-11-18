/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:11:02 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/17 17:15:50 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (s1[i] - s2[i]);
}
// int main()
// {
//     char s1[] = "Miau Miau";
//     char s2[] = "Miao Miao";
//     printf("%d\n", strcmp(s1,s2));
//     printf("%d", ft_strcmp(s1,s2));
//     return(0);
// }
