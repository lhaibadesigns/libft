/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:15:02 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 06:14:08 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_new_func(unsigned int i, char s)
{
	return (s + i);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*end;
	char	*original_end;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		i++;
	}
	end = malloc((i + 1) * sizeof(char));
	if (!end)
		return (NULL);
	end[i] = '\0';
	i = 0;
	original_end = end;
	while (*s)
	{
		*end = f(i, *s);
		end++;
		s++;
		i++;
	}
	return (original_end);
}
/*
int	main(void)
{
	char const *s = "Amineelhaiba";
	char *result;
	unsigned int i;

	i = 0;
	result = ft_strmapi(s , ft_new_func);
	printf("the result is: %s\n", result);
	free(result);

	return(0);
} */