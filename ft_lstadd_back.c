/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:45:16 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/07 13:35:48 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp = *lst;

    if(!*lst)
    {
        *lst = new;
        new->next = NULL;
        return ;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->next = NULL;
}
