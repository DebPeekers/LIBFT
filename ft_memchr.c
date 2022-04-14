/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:23:10 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 10:29:11 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
LOCATES FIRST OCCURANCE OF C (CONVERTED TO AN UNSIGNED CHAR) IN STRIN S AND
RETURNS A POINTER TO BYTE LOCATED, OR NULL
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
