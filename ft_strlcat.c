/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:14:46 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/01 01:33:25 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < dstsize && dst[i] != '\0')
	{
		++i;
	}
	j = 0;
	while ((i + j + 1) < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		++j;
	}
	if (i < dstsize)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

/*
int	main(void)
{
	char d[20] = "Helloiii";
	char s[] = "Jaa";

	ft_strlcat(d, s, 8);
	printf("total length is : %zu\n", ft_strlcat(d, s, 8));

	return (0);
} */
