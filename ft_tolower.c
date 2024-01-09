/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:38:08 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:38:15 by lhaiba           ###   ########.fr       */
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
