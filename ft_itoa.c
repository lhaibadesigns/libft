/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:33:24 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:39:52 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_itoa(int num) {
    int n = num;
    int count = 0;
    int i;
    
    while (n != 0) {
        n /= 10;
        count++;
    }

    if (num == 0) {
        char *result = (char *)malloc(2 * sizeof(char));
        if (result == NULL) {
            return NULL;
        }
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    if (num < 0) {
        count++;
        n = -num;
    } else {
        n = num;
    }

    char *result = (char *)malloc((count + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    i = (count - 1);
    while ( i >= 0)
    { 
        result[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }

    if (num < 0) {
        result[0] = '-';
    }

    result[count] = '\0';

    return result;
}

/* int main() {
    int num = -12345;
    char *str = ft_itoa(num);

    if (str != NULL) {
        printf("Integer: %d\n", num);
        printf("String: %s\n", str);

        free(str);
    } else {
        printf("Memory allocation error\n");
    }

    return 0;
} */