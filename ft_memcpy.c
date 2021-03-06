/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:55:47 by ljohnson          #+#    #+#             */
/*   Updated: 2021/11/09 18:49:06 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t			a;
	unsigned char	*dest;
	unsigned char	*srce;

	if (!src && !dst)
		return (NULL);
	dest = dst;
	srce = src;
	a = 0;
	while (a < n)
	{
		dest[a] = srce[a];
		a++;
	}
	return (dst);
}
