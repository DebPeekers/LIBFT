/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 09:03:53 by dpickard          #+#    #+#             */
/*   Updated: 2022/03/02 12:08:04 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atio function converts a string into and integer.
 * It skips all whit-space characters as the beginnign of thse string,
 * and converts subsequent characters as part of the number stoping when it encounters
 * the first charager that isn't a number */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str [i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	/* '\t' is used to read the 'tab' character by shifting the curser a couple of spaces to the right
	 * '\n' new line
	 * '\r' caracge return, similar to new line
	 * '\v vertical tab
