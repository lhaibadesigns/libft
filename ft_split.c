/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:06:26 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/19 15:25:07 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    safe_malloc(char **token_v, int position, size_t buffer)
{
    int        i;

    i = 0;
    token_v[position] = malloc(buffer);
    if (NULL == token_v[position])
    {
        while (i < position)
            free(token_v[i++]);
        free(token_v);
        return (1);
    }
    return (0);
}

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

int    fill(char **token_v, char const *s, char delimeter)
{
    size_t    len;
    int        i;

    i = 0;
    while (*s)
    {
        len = 0;
        while (*s == delimeter && *s)
            ++s;
        while (*s != delimeter && *s)
        {
            ++len;
            ++s;
        }
        if (len)
        {
             if (safe_malloc(token_v, i, len + 1))
                   return (1);
          ft_strlcpy(token_v[i], s - len, len + 1);
        }
        ++i;
    }
    return (0);
}

size_t    count_tokens(char const *s, char delimeter)
{
    size_t    tokens;
    int        inside_token;

    tokens = 0;
    while (*s)
    {
        inside_token = 0;
        while (*s == delimeter && *s)
            ++s;
        while (*s != delimeter && *s)
        {
            if (!inside_token)
            {
                ++tokens;
                inside_token = 1;
            }
            ++s;
        }
    }
    return (tokens);
}

char    **ft_split(char const *s, char c)
{
    size_t    tokens;
    char    **token_v;

    if (NULL == s)
        return (NULL);
    tokens = 0;
    tokens = count_tokens(s, c);
    token_v = malloc((tokens + 1) * sizeof(char *));
    if (NULL == token_v)
        return (NULL);
    token_v[tokens] = NULL;
    if (fill(token_v, s, c))
        return (NULL);
    return (token_v);
}

int main()
{
    char c = '_';
    char const *s = "              __Amine_is_the_best__";
    char **splited = ft_split(s , c);
    int i;
    
    for (i= 0; splited[i] != NULL; i++)
    {
      printf("Token %d --> %s\n", i, splited[i]);
    }
    
    i = 0;
    while (splited[i] != NULL)
        free(splited[i++]);
    free(splited);
    return (0);
}