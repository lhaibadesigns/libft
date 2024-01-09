#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
  int i;
  i = 0;
  while (s[i] != '\0')
  {
    i++;  
  }

  while (i >= 0)
  {
    if (s[i] == c)
    return ((char *)&s[i]);
    i--;
  }
    return(NULL);
}

int main()
{
  const char *s = "Amine el haiba";
  char c = 'r';
  printf("the char %c located in the string (%s)", c, ft_strrchr(s, c));
  return (0);
}