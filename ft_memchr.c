/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:26 by ael-haib          #+#    #+#             */
/*   Updated: 2024/02/21 19:28:52 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/* 
int main()
{
  //char s[10] = {10, -1, -10, 56, 89, 0, 5};
  //int *store = ft_memchr( s, 10, 6);
  int	nums[] = {1, 2};

  const char *s = "this";
  
  ft_memchr(s, 1, 8);
  return(0);
} */