/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:12:57 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:39:39 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

  int  ft_isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    return (1);
  } else { return (0);}
}

/* int main()
{
  char ch;

  ch = '#';
    if (ft_isalpha (ch)) {
    printf("the %c (input) is a alpha", ft_isalpha(ch));
  } else { printf("its not an alpha"); }
  return (0);
}
 */