/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:51 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/31 19:04:56 by ael-haib         ###   ########.fr       */
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


	//ft_memset(NULL, '1', 4);
	memset(NULL, '1', 4);
	return(0);
} */