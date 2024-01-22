/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:13:36 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:29:52 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void ft( unsigned int i, char *c)
{
  *c = 'a';
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        ft(i , &s[i]);
        i++;
    }
}

/* int main()
{
    int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    printf("fd: %d\n", fd);

    return 0;
    
    char s[] = "Amine";
    ft_striteri(s, ft);
    printf("s = :%s", s);
    return (0);
} */