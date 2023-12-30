#include <stdio.h>

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *ptr = s;
    unsigned char chr = (unsigned char)c;

    while (n > 0) {
        *ptr++ = chr;
        n--;
    }
    return s;
}

int main()
{
    char str[7];
    char c;

    c = 'i';
    printf("this is the result: %s\n", (unsigned char *)ft_memset( str, c, 9));
    return(0);
}