/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:09 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:41:02 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i = 0;
  
  while ((s1[i] || s2[i]) && i < n)
  {
    if (s1[i] != s2[i])
      return (s1[i] - s2[i]);
    i++;
  }

  return 0;
}

/* int main()
{
  const char *s1 = "Amine";
  const char *s2 = "Amineelhaiba";
  int n = 4;

  printf("s1: %s, s2: %s, n: %d, Result: %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
  return 0;
} */