/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:45:16 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/14 22:39:03 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}

/* int main()
{
	t_list * l =  NULL; t_list * l2 =  NULL;
	int a = 1;


	ft_lstadd_back(&l, ft_lstnew((void*)&a));
	a = 2;
	ft_lstadd_back(&l, ft_lstnew((void*)&a));
	a = 3;
	ft_lstadd_back(&l2, ft_lstnew((void*)&a));
	a = 4;
	ft_lstadd_back(&l2, ft_lstnew((void*)&a));
	//ft_lstadd_back(&l, l2);

	for (; l; )
	{
		printf("%d\n", *(int*)l->content);
		l = l->next;
	}

	return (0);
} */