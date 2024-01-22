/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:15 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:41:06 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *str) {
    const char *s = str;
    size_t i;

    i = 0;
    while (s[i]) {
        i++;
    }
    return (i);
}

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    const char *str1 = s1;
    const char *str2 = s2;
    int i;

    i = 0;
    while ((str1[i] || str2[i]) && (size_t)i < n)
  {
    if (str1[i] != str2[i])
      return (str1[i] - str2[i]);
    i++;
  }
  return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = ft_strlen(needle);

    if (needle_len == 0) {
        return (char *)haystack;
    }

    while (*haystack && len >= needle_len) 
    {
        if (*haystack == *needle && ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;

        haystack++;
        len--;
    }
    return NULL; 
}

/* int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t n;

    n = 12;
    if (ft_strnstr(haystack, needle, n))
        printf("i found it %s\n", ft_strnstr(haystack, needle, n));

    else (printf("not found it\n"));

    return 0;
} */