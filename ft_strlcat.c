#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = 0;

    while (dst_len < size && dst[dst_len] != '\0') {
        ++dst_len;
    }

    size_t src_len = 0;

    while (dst_len + src_len + 1 < size && src[src_len] != '\0') {
        dst[dst_len + src_len] = src[src_len];
        ++src_len;
    }

    if (dst_len + src_len < size) {
        dst[dst_len + src_len] = '\0';
    }

    return dst_len + src_len;
}

int main()
{
    char d[] = "Helloiii";
    char s[] = "Jaa";
    
    printf("Total length: %zu\n", ft_strlcat(d, s, 4));

    return 0;
}