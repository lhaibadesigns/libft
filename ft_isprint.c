/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:23 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:38:52 by lhaiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(int c) {
    if (c >= 32 && c <= 126) {
    return (1);
  } else { return (0);}
}

int main() {
    char c;

    c = 'J';

    if (ft_isprint(c)) {
        printf("%c is a printable character.\n", c);
    } else {
        printf("%c is not a printable character.\n", c);
    }

    return 0;
}