/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:06 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:39:00 by lhaiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
  if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ){
    return (1);
  } else {return (0);}

}
int main()
{
  int d;

  d = 'O';
  if (ft_isalnum(d))
    printf("%c is an alphanumeric character", d);
    else printf("%c its not an alphanumeric character", d);
return(0);
}