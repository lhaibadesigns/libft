/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:50:08 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/20 20:52:06 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }

    if (n <= 9 && n >= 0)
     ft_putchar_fd((n + 48), fd);

    if (n > 9)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putchar_fd(((n % 10) + '0'), fd);
    }
}

int main()
{
    int n = -456789;
    int fd;
    fd = open("test.txt", O_WRONLY | O_CREAT, 0777);

    ft_putnbr_fd(n , fd);
    return(0);
}