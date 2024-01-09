/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:30 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:48:24 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *d = (unsigned char *) dst;
    unsigned char *s = (unsigned char *) src;
    size_t i;

    i = 0;
    if (d == 0 && s == 0)
        return (NULL);

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);

}

int main()
{
    char s[] = "amine";
    char dst[] = "AMINEELHA";
    printf("this is the result : %s", (char *)ft_memcpy(dst, s, 4));
    return(0);
}