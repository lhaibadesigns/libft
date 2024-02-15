/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:59:17 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/15 00:46:39 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = NULL;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/* void	leaks(void)
{
	system("leaks -q a.out");
}

int	main(void)
{

	atexit(leaks);

	char	*s = ft_strdup("hello");
	char	*s2 = ft_strdup("world");

	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(s));
	ft_lstadd_back(&head, ft_lstnew(s2));

	t_list *tmp = head;
	while (tmp != NULL)
	{
		printf("the content of the lst's %s\n", tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&head, free);


	return (0);
} */