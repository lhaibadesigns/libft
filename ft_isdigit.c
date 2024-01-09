/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:20 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:48:30 by ael-haib         ###   ########.fr       */
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