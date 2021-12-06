/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:50:20 by ljohnson          #+#    #+#             */
/*   Updated: 2021/11/10 17:17:10 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*newstr;

	if (!s)
		return (NULL);
	a = 0;
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	newstr = malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	while (a < len && start < ft_strlen(s))
	{
		newstr[a] = s[start + a];
		a++;
	}
	newstr[a] = '\0';
	return (newstr);
}
