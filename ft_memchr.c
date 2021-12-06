/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:19:39 by ljohnson          #+#    #+#             */
/*   Updated: 2021/11/10 13:17:20 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*str;

	str = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		if (str[a] == (unsigned char)c)
			return ((void *)&s[a]);
		a++;
	}
	return (NULL);
}

// void	*ft_memchr(const void *block, int c, size_t n)
// {
// 	size_t		i;
// 	const char	*check;

// 	check = block;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (check[i] == (char) c)
// 			return ((char *) &check[i]);
// 		i++;
// 	}
// 	return (0);
// }