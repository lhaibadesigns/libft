/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:22 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:41:09 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  int i;
  i = 0;
  while (s[i] != '\0')
  {
    i++;  
  }

  while (i >= 0)
  {
    if (s[i] == c)
    return ((char *)&s[i]);
    i--;
  }
    return(NULL);
}

/* int main()
{
  const char *s = "Amine el haiba";
  char c = 'r';
  printf("the char %c located in the string (%s)", c, ft_strrchr(s, c));
  return (0);
} */