/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:46:18 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 10:26:05 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Finds the first occrucance of a char in a string

Character c can be the null character the ending
is null character of stringis included in the search

The strchr() function operates on null-ending strings

The arguments to the function should contain a null character
that marks the end of the string
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
