/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:44:42 by dpickard          #+#    #+#             */
/*   Updated: 2022/03/15 19:56:29 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lifbft.h"

char *ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/* The strchr() function finds the first occurrence of a character in a string. The character c can be the null character (\0); the ending null character of string is included in the search.

The strchr() function operates on null-ended strings. The string arguments to the function should contain a null character (\0) that marks the end of the string*/
