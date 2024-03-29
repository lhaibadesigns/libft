/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:01 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 06:13:59 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

/* int main()
{
	char str[] = "Life is good.";
	int result = ft_strlen(str);
	printf("The length of the string is %d.\n", result);
	return (0);
} */