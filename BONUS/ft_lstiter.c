/*
*	DESCRIPTION
*	Iterates the list ’lst’ and applies the function ’f’ to the content of each 
*	element.
*	PARAMETERS
*	#1. The adress of a pointer to an element.
*	#2. The adress of the function used to iterate on the list.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}