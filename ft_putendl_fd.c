/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:10:19 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/20 18:14:20 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void ft_putstr_fd(char *s, int fd)
{
    
    while(*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);
}

int main()
{
    int fd;

    char s[] = "Amineelhaiba";
    fd = open("test.txt", O_WRONLY | O_CREAT, 0777);

    ft_putstr_fd(s, fd);
    return(0);
}