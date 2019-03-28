/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystasiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 12:28:47 by ystasiv           #+#    #+#             */
/*   Updated: 2018/03/29 14:29:29 by ystasiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int a;

	a = 0;
	if (s != NULL && f != NULL)
	{
		while (s[a] != '\0')
		{
			f(a, &s[a]);
			a++;
		}
	}
}