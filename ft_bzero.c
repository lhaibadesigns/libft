/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:00 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:39:04 by lhaiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n) {
    unsigned char *ptr = s;

    while (n-- > 0) {
        *ptr++ = '\0';
    }
}

int main() {
    char str[] = "Amineee";
    size_t i;

    i = 0;
    ft_bzero(str, i);
    printf("this is the result: %s\n", str);

    return 0;
}
