/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:17 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:39:48 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isprint(int c) {
    if (c >= 32 && c <= 126) {
    return (1);
  } else { return (0);}
}

/* int main() {
    char c;

    c = 'J';

    if (ft_isprint(c)) {
        printf("%c is a printable character.\n", c);
    } else {
        printf("%c is not a printable character.\n", c);
    }

    return 0;
} */