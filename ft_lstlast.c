/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:51:03 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/07 23:37:51 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
    t_list *temp;

    temp = lst;
    if (temp == NULL)
        return NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
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

    head->content = (char *)"hohla";
    second->content = (char *)"hi";
    third->content = (char *)"how";
    numberfor->content = (char *)"are you";

    head->next = second;
    second->next = third;
    third->next = numberfor;
    numberfor->next = NULL;

    t_list *lastnode = ft_lstlast(head);

    printf("Content of the last node: %s\n", (char *)lastnode->content);
    printf("Content of the last node: %s\n", (char *)head->content);
    free(head);
    free(second);
    free(third);
    free(numberfor);

    return 0;
} */