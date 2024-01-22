/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:48 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:41:21 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_tolower(int c) 
{
  if ( c >= 65 && c <= 90)
  {
    return (c + 32);
  } else { return (0);}
}

/* int main()
{
  char c;

  c = 'D';
    printf ("this is the first char %c, and this is the second one %c\n", c, ft_tolower(c));
  return (0);
}
 */