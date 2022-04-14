/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:02:36 by dpickard          #+#    #+#             */
/*   Updated: 2022/04/07 12:07:25 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes as a parameter an element and frees memory of the elementscontent */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{	
		del(lst->content);
		free(lst);
	}
}
