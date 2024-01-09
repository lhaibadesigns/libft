#include <stdlib.h>
#include <stdio.h>

int check_set(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(const char *s1, const char *set)
{
    if (s1 == NULL || set == NULL)
        return NULL;

    size_t start = 0;
    size_t end = 0;

    while (s1[start] && check_set(s1[start], set))
        start++;

    end = start;
    while (s1[end] && !check_set(s1[end], set))
        end++;

    size_t trimmed_len = end - start;
    char *trimmed_str = (char *)malloc(trimmed_len + 1);

    if (trimmed_str == NULL)
        return NULL;
    size_t i = 0;
    while ( i < trimmed_len)
    {
        trimmed_str[i] = s1[start + i];
        i++;
    }

    trimmed_str[trimmed_len] = '\0';

    return trimmed_str;
}

int main() {
    const char *s1 = "#&amine#&";
    const char *set = "#&";

    char *trimmed_str = ft_strtrim(s1, set);
    if (trimmed_str == NULL) {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        return EXIT_FAILURE;
    }

    printf("Original String: /%s/\n", s1);
    printf("Trimmed String:  /%s/\n", trimmed_str);

    free(trimmed_str);
    
    return EXIT_SUCCESS;
}