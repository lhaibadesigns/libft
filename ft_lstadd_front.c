/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:02:42 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/01 01:32:43 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* int	main(void)
{
	t_list *new_list;
	t_list *lst = NULL;
	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (1);
	new_list->content = 5;
	new_list->next = NULL;
	ft_lstadd_front(&lst, new_list);
	printf("%s", (char *)lst->content);
	return (0);
} */