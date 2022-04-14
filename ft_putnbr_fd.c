/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:42:44 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 11:39:38 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the integer 'n' to the given file descriptor */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int		n2;

	n2 = n;
	if (n2 < 0)
	{
		n2 = (n2 * -1);
		write(fd, "-", 1);
	}
	if (n2 > 9)
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putchar_fd((n2 % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n2 + '0', fd);
}
