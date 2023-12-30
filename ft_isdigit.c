#include <stdio.h>

int ft_isdigit(int c)
{
  if (c >= '0' && c <= '9')
  { return(1);
  } else {return (0);}

}

int main()
{
  char d;

  d = '8';
  if (ft_isdigit (d)) {
    printf("%c is a digt", d);
  } else { printf("%c its not a digt", d);}
return(0);
}
