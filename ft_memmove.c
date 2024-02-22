/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:45 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/22 18:06:21 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (d < s || d >= s + len)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}

// dst: "abc"
//          ^
// src: "abcdefg"
/* 
int main()
{
	char d[] = "xxx";
	char s[] = "abcdefg";
	ft_memmove(d, d, 7);
	printf("%s\n", d);
	
	char d2[] = "yyy";
	char s2[] = "abcdefg";
	ft_memmove(d2+3, d2, 7);
	printf("%s\n", d2);
	return (0);
} */