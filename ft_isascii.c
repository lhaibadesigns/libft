#include <stdio.h>

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127){
   return(1);
  } else {return (0);}
}

int main()
{
  int d;

  d = 128;
  if (ft_isascii (d)){
    printf("%c is an ascii code", d);
  } else { printf("%c its not an ascii code", d);}
return(0);
}
