#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;

    while (i < size - 1 && src[i] != '\0') {
        dst[i] = src[i];
        ++i;
    }
    dst[i] = '\0';

    while (src[i] != '\0') {
        ++i;
    }

    return i;
}

int main()
{
    char d[] = "Helloiii";
    char s[] = "Jaha";
    ft_strlcpy(d, s, 9);
    printf("%s", d);
    return 0;
}