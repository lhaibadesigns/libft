/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:11 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:39:45 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isdigit(int c)
{
  if (c >= '0' && c <= '9')
  { return(1);
  } else {return (0);}

}

/* int main()
{
  char d;

  d = '8';
  if (ft_isdigit (d)) {
    printf("%c is a digt", d);
  } else { printf("%c its not a digt", d);}
return(0);
} */