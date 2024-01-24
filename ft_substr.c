/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:37 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/24 12:37:39 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_substr_len(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	int		sec_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
		sec_len = 0;
	else if (start + len > str_len)
		sec_len = str_len - start;
	else
		sec_len = len;
	return (sec_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sec_len;
	char	*substring;
	char	*dest_ptr;

	if (s == NULL || len < 0)
		return (NULL);
	sec_len = get_substr_len(s, start, len);
	substring = malloc((sec_len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	dest_ptr = substring;
	while (*s && start--)
		s++;
	while (*s && len--)
	{
		*dest_ptr = *s;
		dest_ptr++;
		s++;
	}
	*dest_ptr = '\0';
	return (substring);
}

/* int	main(void)
{
	const char *original = "Amine el haiba";

	char *result = ft_substr(original, 400, 20);
	if (result != NULL)
	{
		printf("Substring is :%s\n", result);
		free(result);
	}
	else
	{
		printf("wrong input : Error\n");
	}

	return (0);
} */