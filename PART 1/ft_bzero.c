/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:19:43 by dpickard          #+#    #+#             */
/*   Updated: 2022/03/08 16:15:36 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
wries n zeroed bytes to the string s.  
If n is zero, bzero() does nothing.
*/

#include "libft.h"

void
	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}
