/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:14:40 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:40:44 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char* ft_strjoin(const char* s1, const char* s2) {
    if (!s1 || !s2)
        return NULL;

    size_t len_s1 = strlen(s1);
    size_t len_s2 = strlen(s2);

    char* total = (char*)malloc((len_s1 + len_s2 + 1) * sizeof(char));

    if (!total)
        return NULL;

    size_t i = 0;
    while (i < len_s1) {
        total[i++] = *s1++;
    }

    while (i < (len_s1 + len_s2)) {
        total[i++] = *s2++;
    }

    total[i] = '\0';
    return total;
}

/* int main() {
    const char* s1 = "whsup ";
    const char* s2 = "bruh!";

    char* result = ft_strjoin(s1, s2);
    if (result != NULL) {
        printf("The full string is: %s\n", result);
        free(result);
    } else {
        printf("memory allocation failed or wrong input: Error\n");
    }

    return 0;
} */