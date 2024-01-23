/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:14:53 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 06:13:56 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (dst == NULL)
		return (0);
	while (src[len] != '\0')
		len++;
	if (size > 0)
	{
		while (i < size - 1 && i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
}
/* int main(void)
{
	char d[10];
	char s[] = "Hello world im";
	size_t res = ft_strlcpy(d, s, 0);
	printf("%zu and %s", res, d);
	return (0);
} */