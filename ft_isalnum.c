/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:12:50 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:39:35 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isalnum(int c)
{
  if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ){
    return (1);
  } else {return (0);}

}
/* int main()
{
  int d;

  d = 'O';
  if (ft_isalnum(d))
    printf("%c is an alphanumeric character", d);
    else printf("%c its not an alphanumeric character", d);
return(0);
} */