/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:20 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:38:54 by lhaiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
  if (c >= '0' && c <= '9')
  { return(1);
  } else {return (0);}

}

int main()
{
  char d;

  d = '8';
  if (ft_isdigit (d)) {
    printf("%c is a digt", d);
  } else { printf("%c its not a digt", d);}
return(0);
}