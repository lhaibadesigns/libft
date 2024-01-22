/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:14:15 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:29:49 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    if (s1 == NULL) {
        return NULL;  
    }

    size_t len = ft_strlen(s1);

    char* dup = (char*)malloc(len + 1);

    if (dup != NULL) {
        ft_strcpy(dup, s1);
    }

    return dup;
}
/* int main() {
    const char* s1 = "Hello, World!";

    char* dup = ft_strdup(s1);
    if (dup != NULL) {
        printf("the s1 is : %s\n", s1);
        printf("the strdup is : %s\n", dup);

        free(dup);
    } else {
        printf("failed\n");
    }

    return 0;
} */