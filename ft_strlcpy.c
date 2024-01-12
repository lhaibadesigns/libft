/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:48 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/12 15:28:07 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;

    while (i < size - 1 && src[i] != '\0') {
        dst[i] = src[i];
        ++i;
    }
    dst[i] = '\0';

    return i;
}

int main()
{
    char d[] = "Helloiii";
    char s[] = "Jaha";
    ft_strlcpy(d, s, 9);
    printf("%s", d);
    return 0;
}