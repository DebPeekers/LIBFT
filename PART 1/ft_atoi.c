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

/*
*	Converts a string into and integer.
*	1. skips white-space characters at beginning of string,
*	2. onverts subsequent characters as part of the number stoping when it encounters
*	the first charager that isn't a number */

int ft_atoi(const char *str)
{
    int i;
    int neg;
    int res;

i = 0;
neg = 1;
res = 0;
while (str[i] == ' '|| (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);)
}
