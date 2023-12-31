/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:45:55 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/09 15:48:37 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
    int sign;
	int number;

	sign = 1;
	number = 0;
	if (str == NULL)
		return number;

	while (*str == ' ' || *str == '\r' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f')
	{
		str++;
	}

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	return (number * sign);
}

int main()
{
    char *s = "      -+--136ahs768";
    printf("%d", ft_atoi(s));
    return (0);
}