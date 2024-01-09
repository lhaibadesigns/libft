/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:39 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:48:10 by ael-haib         ###   ########.fr       */
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
