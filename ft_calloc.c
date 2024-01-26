/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:12:36 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/26 21:34:09 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*y;
	char	*char_ptr;
	size_t	i;

	if ((int)count >= 0 && (int)size >= 0)
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
	char	*ptr = ft_calloc(0, 0);
	char	*ptr2 = calloc(0, 0);

	printf("%c\n", *ptr);
	printf("%c\n", *ptr2);

	printf("ptr: %p\n", ptr);
	printf("ptr2: %p\n", ptr2);
	return (0);
}
 */