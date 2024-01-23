/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:12:36 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 06:12:46 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*y;
	char	*char_ptr;
	size_t	i;

	if (count && size)
	{
		total = count * size;
		y = malloc(total);
		if (y != NULL)
		{
			char_ptr = (char *)y;
			i = 0;
			while (i < total)
			{
				char_ptr[i++] = 0;
			}
		}
		return (y);
	}
	return (NULL);
}

/* int main()
{
	char	*ptr;
	size_t	n;
	size_t	i;

	n = 5;
	ptr = (char *)ft_calloc(n, sizeof(int));
	if (ptr != NULL)
	{
		i = 0;
		while (i < n * sizeof(int))
		{
			printf("%d ", ptr[i]);
			++i;
		}
		free(ptr);
	}
	else
	{
		printf("calloc failed\n");
	}
	return (0);
}
 */