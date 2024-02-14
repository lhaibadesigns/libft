/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:45:16 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/14 01:31:15 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;
}

/* int main()
{
	t_list *head = NULL;
	t_list *last = ft_lstnew((char *)"end");
   // ft_lstadd_front(&head, ft_lstnew((char *)"amiineeeeee"));
	ft_lstadd_back(&head, last);
	printf("the last content is %s\n", (char *)last->content);
   // printf("head content is %s\n", (char *)head->next->content);
	return (0);
} */