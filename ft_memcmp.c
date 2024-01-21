/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:32 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/21 13:13:35 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned char *str1 = (unsigned char *)s1;
  unsigned char *str2 = (unsigned char *)s2;
  size_t i;

  i = 0;
  while (i < n)
  {
    if (str1[i] != str2[i])
      return(str1[i] - str2[i]);
    i++;
  }
  return(0);
}

int main()
{
  char *s1 = "45if";
  char *s2 = "45ifeelhaiba";
  printf(" this is s1 : %s \n and s2 : %s \n and result is : %d", s1, s2, ft_memcmp(s1, s2, 5));
  printf("\n origin result is : %d", memcmp(s1, s2, 5));
  return(0);
}
