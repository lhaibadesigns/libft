/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:54 by ael-haib          #+#    #+#             */
/*   Updated: 2024/01/22 23:30:53 by ael-haib         ###   ########.fr       */
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

/* int main()
{
  char ch;

  ch = 'A';
  printf("the first char is %c, and the second one is %c", ch, ft_toupper(ch));
  return (0);
}
 */