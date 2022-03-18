/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:41:14 by dpickard          #+#    #+#             */
/*   Updated: 2022/02/23 14:18:15 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
*	The memset() function writes len bytes of value c (converted to an 
*	unsigned char) to the string b.
*	
*	#1. The destiny pointer in which to write.
*	#2. The character to write.
*	#3. The number of bytes to write.
*
*	The memset() function returns its first argument.  
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
