/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:13:36 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:55:10 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void f( unsigned int i, char *c)
{
    i = 0;
  *c = 'a';
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f(i , &s[i]);
        i++;
    }
}

/* int main()
{
    int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    printf("fd: %d\n", fd);

    return 0;
    
    char s[] = "Amine";
    ft_striteri(s, f);
    printf("s = :%s", s);
    return (0);
} */