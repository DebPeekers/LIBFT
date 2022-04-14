/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:04:53 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 10:33:21 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ALLOCATES SPACE FOR COUNT OBJECTS THAT ARE SIZE BITES OF MEMORY
THEN RETURNS A POINTER TO THE ALLOCATED MEMORY.
THE ALLOCATED MEMORY IS FILLED WITH BYTES OF VALUE TO ZERO.
	1. Count of objects allocate
	2. size of bytes in each object
	Will return a pointer to allocated memory
	if an error they return a NULL pointer
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}
