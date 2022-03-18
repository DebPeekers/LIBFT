/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:52:16 by dpickard          #+#    #+#             */
/*   Updated: 2022/03/08 16:12:56 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* counts out string length */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter ++;
		str ++;
	}
	return (counter);
