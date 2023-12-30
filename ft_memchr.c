#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
  const char * str = (const char *)s;
  size_t i;

  i = 0;
  while (i < n)
  {
    if (str[i] == c)
    return ((void *)&str[i]);
    i++;
  }
  return(NULL);
}

int main()
{
  char *s = "Amineelhaiba";
  printf("this is the result: %s", (const char *)ft_memchr( s, '\0', 3));
  return(0);
}
