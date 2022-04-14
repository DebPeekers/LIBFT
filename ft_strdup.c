/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:57:13 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 10:38:26 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates memory for a copy of the string s1
does the copy and returns a pointer to it.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, len);
	return (s2);
}
