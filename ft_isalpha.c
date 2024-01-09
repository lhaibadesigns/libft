/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:09 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:38:58 by lhaiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

  int  ft_isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    return (1);
  } else { return (0);}
}

int main()
{
  char ch;

  ch = '#';
    if (ft_isalpha (ch)) {
    printf("the %c (input) is a alpha", ft_isalpha(ch));
  } else { printf("its not an alpha"); }
  return (0);
}
