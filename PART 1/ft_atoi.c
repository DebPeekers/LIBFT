/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:32:35 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 10:33:49 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION CONVERTS STRING INTO INEGER
SKIPS WHITE-SPACE AT START
CONVERTS CHARACTERS AS PART OF NUMBER STOPING AT FIRST CHAR THAT ISNT A NUMBER 
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

i = 0;
neg = 1;
res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
			i++;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}
