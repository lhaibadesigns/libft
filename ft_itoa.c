/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:33:24 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/24 12:10:56 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*allocate_result(int num, int count)
{
	char	*result;

	result = NULL;
	if (num == 0)
	{
		result = (char *)malloc(2 * sizeof(char));
		if (result != NULL)
		{
			result[0] = '0';
			result[1] = '\0';
		}
	}
	else
	{
		result = (char *)malloc((count + 1) * sizeof(char));
	}
	return (result);
}

void	fill_result(char *result, long int n, int count)
{
	int	i;

	i = (count - 1);
	while (i >= 0)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int num)
{
	long int	n;
	char		*result;
	int			count;

	count = count_digits(num);
	if (num < 0)
	{
		count++;
		n = (long int)num * -1;
	}
	else
		n = num;
	result = allocate_result(num, count);
	if (result != NULL)
	{
		fill_result(result, n, count);
		if (num < 0)
			result[0] = '-';
		if (count)
			result[count] = '\0';
	}
	return (result);
}

/* int    main(void)
{
	int        num;
	char    *str;

	num = 0;
	str = ft_itoa(num);
	if (str != NULL)
	{
		printf("Integer: %d\n", num);
		printf("String: %s\n", str);
		free(str);
	}
	else
	{
		printf("Memory allocation error\n");
	}
	return (0);
} */