/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:33:24 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 07:50:34 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int num)
{
	int		n;
	int		count;
	int		i;
	char	*result;

	n = num;
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	if (num == 0)
	{
		result = (char *)malloc(2 * sizeof(char));
		if (result == NULL)
		{
			return (NULL);
		}
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	if (num < 0)
	{
		count++;
		n = -num;
	}
	else
		n = num;
	result = (char *)malloc((count + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = (count - 1);
	while (i >= 0)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (num < 0)
		result[0] = '-';
	result[count] = '\0';
	return (result);
}

int main() {
	int num = -2147483648;
	char *str = ft_itoa(num);

	if (str != NULL) {
		printf("Integer: %d\n", num);
		printf("String: %s\n", str);

		free(str);
	} else {
		printf("Memory allocation error\n");
	}

	return (0);
}