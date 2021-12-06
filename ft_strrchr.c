/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:43:58 by ljohnson          #+#    #+#             */
/*   Updated: 2021/11/09 19:02:12 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	while (a > 0)
	{
		if (s[a] == (char)c)
			return ((char *)&s[a]);
		a--;
	}
	if (s[a] == (char)c)
		return ((char *)&s[a]);
	return (0);
}
