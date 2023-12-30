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
