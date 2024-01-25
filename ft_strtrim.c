/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:29 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/25 03:01:27 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]))
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str == NULL)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}

/* int	main(void)
{
	const char *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	const char *set = " ";

	char *trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str == NULL)
	{
		printf("Error: Memory allocation failed.\n");
		return (0);
	}

	printf("Original String: /%s/\n", s1);
	printf("Trimmed String:  /%s/\n", trimmed_str);

	free(trimmed_str);

	return (0);
} */