/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:14:08 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/21 13:14:11 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
  int i;

  i = 0;
  while (s[i] != c)
  {
    if (s[i] == '\0')
    return (NULL);
    i++;
  }
    return((char *)&s[i]);
}

int main()
{
  const char *s = "Amine el haiba";
  char c = 'l';
  printf("the char %c located in the string (%s)", c, ft_strchr(s, c));
  return (0);
  

}
