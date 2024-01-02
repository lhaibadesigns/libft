#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;
    for (i = 0; s[i]; ++i);
    return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (i < dstsize && dst[i])
    {
        i++;
    }

    while ((i + j + 1) < dstsize && src[j])
    {
        dst[i + j] = src[j];
        j++;
    }


    if (i < dstsize)
    {
        dst[i + j] = '\0';
    }

    return (i + ft_strlen(src));
}

int main()
{
    char d[20] = "Helloiii";
    char s[] = "Jaa";

    ft_strlcat(d, s, 8);
    printf("total length is : %zu\n", ft_strlcat(d, s, 8));

    return 0;
}
