/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:51:42 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 11:37:46 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Applies the function f to each character of the string passed as argument,
 and passed its index as first argument.
 Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s != 0 && f != 0)
	{
		i = 0;
		while (s [i])
		{
			f(i, s + i);
			i++;
		}
	}
}
