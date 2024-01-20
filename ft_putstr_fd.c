/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:36:30 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/20 18:06:26 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void ft_putstr_fd(char *s, int fd)
{

    int i = 0;
    
    while(s[i])
    {
        write(fd, s, 1);
        s++;
    }
}

int main()
{
    int fd;

    char s[] = "hello";
    fd = open("hello", O_WRONLY | O_CREAT, 0777);

    ft_putstr_fd(s, fd);
    return(0);
}