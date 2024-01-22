/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:45 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:28:26 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (d < s || d >= s + len)
    {
        while (len--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        d += len - 1;
        s += len - 1;
        while (len--)
        {
            *d-- = *s--;
        }
    }

    return dest;
}

/* int main()
{
    char d[] = "Helloaaaa";
    char s[] = "Jahaiioh";
    ft_memmove(d, s, 9);
    printf("%s", d);
    return 0;
} */