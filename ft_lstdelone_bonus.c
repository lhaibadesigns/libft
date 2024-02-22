/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:49:12 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/21 19:19:47 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void    leaks()
{
	system("leaks -q main");
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* int main()
{
	atexit(leaks);
	char    *s2 = strdup("123");
	t_list * s = ft_lstnew(s2);
	ft_lstdelone(s, free);
	//free(s2);
} */