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
