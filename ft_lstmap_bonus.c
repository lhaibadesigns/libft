/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:42:25 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/22 00:49:23 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void *f(void *s)
{
	s += 1;
	return (s);
}
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* #include <stdio.h>
#include <unistd.h>
#include "libft.h"

void *f(void *s);
void (*del)(void *);

void *ft_printfunc(t_list *lst)
{
    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
    return (0);
}

int main()
{
	char	*s = ft_strdup("hello ");
	char	*s2 = ft_strdup("world");

	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(s));
	ft_lstadd_back(&head, ft_lstnew(s2));
    t_list *tmp = head;

    ft_printfunc(tmp);
	tmp = ft_lstmap(tmp, &f, free);
    ft_printfunc(tmp);
	return(0);
} */
