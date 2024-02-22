/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:44:32 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/16 18:33:16 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void    f(void * s)
{
	int	*a;

	a = s;
	*a = *a + 1;
}
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* int main()
{
	int s = 1;
	int s1 = 2;
	int s2 = 3;

	// 1 2 3 -> +1 => 2 3 5
	t_list  *tmp;
	tmp = ft_lstnew((void *)&s1);
	ft_lstadd_front(&tmp, ft_lstnew((void *)&s));
	ft_lstadd_back(&tmp, ft_lstnew((void *)&s2));
	ft_lstiter(tmp, f);
	while(tmp)
	{
		printf("%d", *(int *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
} */