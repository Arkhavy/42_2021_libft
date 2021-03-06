/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:30:11 by ljohnson          #+#    #+#             */
/*   Updated: 2021/11/08 14:58:30 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	a;

	a = 0;
	if (!s)
		return ;
	while (s[a])
	{
		(*f)(a, &s[a]);
		a++;
	}
}
