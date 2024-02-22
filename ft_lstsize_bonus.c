/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:29:48 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/14 01:30:44 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* int main()
{
	int	size;

	t_list* head = NULL;
	t_list* second = NULL;
	t_list* third = NULL;
	t_list* numberfor = NULL;
	head = (t_list*)malloc(sizeof(t_list));
	second = (t_list*)malloc(sizeof(t_list));
	third = (t_list*)malloc(sizeof(t_list));
	numberfor = (t_list*)malloc(sizeof(t_list));
	head->content = (void*)1;
	second->content = (void*)2;
	third->content = (void*)3;
	numberfor->content = (void*)5;
	head->next = second;
	second->next = third;
	third->next = numberfor;
	numberfor->next = NULL;
	size = ft_lstsize(head);
	printf("Size of the linked list: %d\n", size);
	free(head);
	free(second);
	free(third);
	free(numberfor);
	return (0);
}
 */