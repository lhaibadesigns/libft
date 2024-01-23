/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:51 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 06:13:17 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = s;
	chr = (unsigned char)c;
	while (n > 0)
	{
		*ptr++ = chr;
		n--;
	}
	return (s);
}

/* int main()
{
	char str[7];
	char c;

	c = 'i';
	printf("this is the result: %s\n", (unsigned char *)ft_memset( str, c, 9));
	return(0);
} */