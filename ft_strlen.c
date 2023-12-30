#include <stdio.h>

size_t ft_strlen(const char *s)
{
  size_t i;

  i = 0;
  while (s[i])
  {
    i++;
  }
  return(i);
}

int main()
{
  char s[] = "Hello";

  printf("the length of this string is %zu", ft_strlen(s));
  return (0);
}