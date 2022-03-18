/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:13:32 by dpickard          #+#    #+#             */
/*   Updated: 2022/03/15 20:14:39 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	The memchr() function locates the first occurrence of c (converted to an 
*	unsigned char) in string s and returns a pointer to byte located, or NULL.
*
*	#1. The pointer in which to check for the occurence of c.
*	#2. The character to check occurence of.
*	#3. The number of bytes to check for any occurence of c in s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
