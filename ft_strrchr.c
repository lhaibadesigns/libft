/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:58 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:47:43 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main()
{
  const char *s = "Amine el haiba";
  char c = 'r';
  printf("the char %c located in the string (%s)", c, ft_strrchr(s, c));
  return (0);
}