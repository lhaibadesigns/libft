/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:29 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/23 07:49:34 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]))
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}
/* int	check_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*trimmed_str;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = 0;
	while (s1[start] && check_set(s1[start], set))
		start++;
	end = start;
	while (s1[end] && !check_set(s1[end], set))
		end++;
	trimmed_len = end - start;
	trimmed_str = (char *)malloc(trimmed_len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	i = 0;
	while (i < trimmed_len)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
	trimmed_str[trimmed_len] = '\0';
	return (trimmed_str);
}
 */
/* int	main(void)
{
	const char *s1 = "#&amine#&";
	const char *set = "#&";

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