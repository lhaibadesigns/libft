/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:21:41 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/01 01:23:42 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/* int	main(void)
{
	char s[] = "Hello";
	t_list	*head = NULL;
	t_list *result = ft_lstnew(s);
	if (result != NULL)
	{
		printf("this is the content of the new node:%s",(char *)result->content);
		free(result);
	}
	else
		printf("Memory allocation failed.");
	return (0);
} */