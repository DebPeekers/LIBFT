/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:49:42 by dpickard          #+#    #+#             */
/*   Updated: 2022/03/30 11:04:38 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
WRITES n ZEROED BYTES TO STRING s
IF n IS ZERO, BZERO() DOES NOTHING
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
