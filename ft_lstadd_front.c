/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 08:45:36 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 08:48:26 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds element 'new' at beginning of list */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!lst)
			*lst = new;
		new ->next = *lst;
		*lst = new;
	}
}
