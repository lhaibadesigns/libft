/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:12:26 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/15 00:53:41 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = '\0';
	}
}

/* int main() {
	char str[] = "Amineee";
	size_t i;

	i = 0;
	ft_bzero(str, i);
	printf("this is the result: %s\n", str);

	return (0);
} */