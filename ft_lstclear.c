/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:59:17 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/14 01:31:59 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		del(lst->content);
		free(lst);
	}
} */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/* int	main(void)
{
	t_list *head = NULL;
	t_list *second = NULL;
	t_list *third = NULL;
	t_list *numberfor = NULL;

	head = (t_list *)malloc(sizeof(t_list));
	second = (t_list *)malloc(sizeof(t_list));
	third = (t_list *)malloc(sizeof(t_list));
	numberfor = (t_list *)malloc(sizeof(t_list));

	head->content = (char *)"hohla";
	second->content = (char *)"hi";
	third->content = (char *)"how";
	numberfor->content = (char *)"are you";

	head->next = second;
	second->next = third;
	third->next = numberfor;
	numberfor->next = NULL;

	ft_lstclear(&head, free);

	return (0);
} */