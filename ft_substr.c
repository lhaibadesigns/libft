/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:37 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:30:42 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_strncpy(char* destination, const char* source, size_t num) 
{
    if (destination == NULL || source == NULL || num == 0) 
    {
        return destination;
    }

    char* dest_ptr = destination;

    while (*source != '\0' && num > 0) 
    {
        *dest_ptr = *source;
        dest_ptr++;
        source++;
        num--;
    }

    while (num > 0) 
    {
        *dest_ptr = '\0';
        dest_ptr++;
        num--;
    }

    return destination;
}

char* ft_substr(const char* str, int start, int len)
{
    if (str == NULL || start < 0 || len < 0) {
        return NULL;
    }

    int str_len = ft_strlen(str);
    if (start >= str_len) {
        return NULL;
    }

    int sec_len = (start + len > str_len) ? (str_len - start) : len;
    char* substring = (char*)malloc((sec_len + 1) * sizeof(char));
    if (substring == NULL) {
        return NULL;
    }

    ft_strncpy(substring, str + start, sec_len);
    substring[sec_len] = '\0';
    return substring;
}

/* int main()
{
    const char* original = "Amine el haiba";

    char* result = ft_substr(original, -3, 8);
    if (result != NULL) {
        printf("Substring is :%s\n", result);
        free(result);
    } else {
        printf("wrong input : Error\n");
    }

    return 0;
} */