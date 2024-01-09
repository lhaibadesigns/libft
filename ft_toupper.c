/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaiba <lhaiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:38:10 by lhaiba            #+#    #+#             */
/*   Updated: 2024/01/09 15:38:12 by lhaiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
  if (c >= 97 && c <= 122)
  {
    return (c - 32);
  } else { return (0);}

}

int main()
{
  char ch;

  ch = 'A';
  printf("the first char is %c, and the second one is %c", ch, ft_toupper(ch));
  return (0);
}
