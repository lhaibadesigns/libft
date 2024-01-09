/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:03 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:48:35 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t total;
    size_t c = count;
    size_t s = size;

    if (c && s)
    {
        total = c * s;
        void *y = malloc(total);

        if (y != NULL)
        {
            char *char_ptr = (char *)y;
            size_t i = 0;
            while (i < total)
            {
                char_ptr[i++] = 0;
            }
        }

        return y;
    }

    return NULL;
}

int main()
{
    char *ptr;
    size_t n;

    n = 5;
    ptr = (char *)ft_calloc(n, sizeof(int));

    if (ptr != NULL)
    {
        size_t i = 0;
        while (i < n * sizeof(int))
        {
            printf("%d ", ptr[i]);
            ++i;
        }

        free(ptr);
    }
    else
    {
        printf("calloc failed\n");
    }

    return 0;
}
