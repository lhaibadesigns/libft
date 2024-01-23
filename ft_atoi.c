/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:45:55 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 06:12:39 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	if (str == NULL)
		return (number);
	while (*str == ' ' || *str == '\r' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		else
			sign = 1;
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

/* int	main(void)
{
	char	*s;

	s = "      +-54";
	printf("%d", ft_atoi(s));
	return (0);
}
 */