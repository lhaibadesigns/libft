/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:13:03 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/21 13:13:06 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127){
   return(1);
  } else {return (0);}
}

int main()
{
  int d;

  d = 128;
  if (ft_isascii (d)){
    printf("%c is an ascii code", d);
  } else { printf("%c its not an ascii code", d);}
return(0);
}
