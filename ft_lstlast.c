/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:51:03 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/07 01:13:08 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;

    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return lst;
}

/* int main()
{
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

    t_list *lastnode = ft_lstlast(head);

    printf("Content of the last node: %p\n", lastnode->content);
    free(head);
    free(second);
    free(third);
    free(numberfor);

    return 0;
} */