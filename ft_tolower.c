/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:38:08 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:47:36 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int c) 
{
  if ( c >= 65 && c <= 90)
  {
    return (c + 32);
  } else { return (0);}
}

int main()
{
  char c;

  c = 'D';
    printf ("this is the first char %c, and this is the second one %c\n", c, ft_tolower(c));
  return (0);
}
